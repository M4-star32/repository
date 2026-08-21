#include <iostream>
using namespace std;

class Person{
    public:
    int age;
    Person(){
        cout << "无参构造函数的调用" << endl;
    }
    Person sff (int a){
        age = a;
        cout << "有参构造函数" << endl;
    }
    Person(const Person& p) {
        age = p.age;
        cout << "拷贝构造函数" << endl;
    }
    ~Person(){
        cout << "析构函数的调用" << endl;
    }
    void test1(){
        cout << 1 << endl;
    }
};

int main() {
    Person p;
    p.sff(1); //提供有参构造函数系统会自动提供拷贝构造函数，类内不用定义也可调用 也就是浅拷贝
    Person p1(p);
    Person p2;
    p2.test1();
    return 0;
}