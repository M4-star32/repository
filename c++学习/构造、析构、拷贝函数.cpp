#include <iostream>
using namespace std;

class Person{
    public:
    int age;
    Person(){
        cout << "无参构造函数的调用" << endl;
    }
    Person(int a){
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
};

int main() {
    Person p;
    Person p1(5); //提供有参构造函数系统会自动提供拷贝构造函数，类内不用定义也可调用 也就是浅拷贝
    Person p2(p1); 
    return 0;
}