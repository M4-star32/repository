#include <iostream>
#include <string>
#include <memory>
#include <vector>
using namespace std;

struct Node{
    shared_ptr<Node> next;
    weak_ptr<Node> previous;
};

int main() {
    int* raw = new int(42);
    cout << * raw << '\n';
    delete raw;
    raw = nullptr;   //原始指针使用，new创建、删除对象后需要释放内存，最后会变成悬空指针
    
    int *owner = new int(10);
    int *alias = owner;
    delete owner;  //释放owner地址之后对象消失，此时alias保存地址但属于无效访问，此时解引用属于悬空指针
    owner = nullptr;
    alias = nullptr;

    auto p = make_shared <int> (10);
    auto q = p;
    cout << "引用次数" << p.use_count() << endl; //2
    int *observer = p.get(); //普通观察指针
    cout << *observer << endl;
    p.reset(); //p放弃所有权，q仍拥有对象
    cout << *q << endl;

    weak_ptr<int> w = q;
    if (auto locked = w.lock()) {
        cout << "对象存在：" << *locked << endl;
    }
    q.reset();
    if (w.expired()) {
        cout << "已经销毁" << endl;
    }
    if (auto locked = w.lock()) {
        cout << *locked << endl;
    }
    else {
        cout << "lock得到悬空指针nullptr" << endl;
    }
        // unique独占所有权 只能移动不能复制
    unique_ptr<int> unique_p(new int (100));
    unique_ptr<int> unique_q = move(unique_p);

    if (!unique_p) { //此时unique_p是悬空指针
        cout << "unique_p已经放弃所有权" << endl;
    }
    unique_q.reset(new int (200)); //释放旧对象，管理新对象
    int *a = unique_q.release(); //放弃管理权但不释放对象
    delete a;
        // unique管理动态数组
    unique_ptr<int[]> array(new int [3]{1,2,3});
    cout << array[0] << endl;

        //vector管理动态数组
        vector<int> values{4,5,6};
        values.push_back(7);
    for (int val : values){
        cout << val << "\n" << endl;
    }

    //allocator分配器
    allocator<string> alloc;
    string* begin = alloc.allocate(2);  //分配两块内存
    string* cur = begin;
    alloc.construct(cur++,"hello");
    alloc.construct(cur++,"world");

    for (string* it = begin; it != cur; it++) {
        cout << *it << endl;
    }
    alloc.destroy(cur);
    alloc.deallocate(begin,2);

    return 0;
}