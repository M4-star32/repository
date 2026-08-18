#include <iostream>
using namespace std;

class Person{
public:
    static int a;
};
int Person::a = 1;
//静态成员变量要类内声明，类外初始化，并且所有对象共享数据

class Person1{
public:
    static int my;
    int b;

    static void func(){
    cout << "静态成员函数调用" << endl;
}
};

void test(){
    Person p1;
    p1.a = 10;
    cout << "p1.a = " << p1.a << endl;

    Person p2;
    p2.a = 20;
    cout << "p1.a = " << p1.a << endl; //共享同一份数据
    cout << "p2.a = " << p2.a << endl;

    cout << "a的值为: " << Person::a << endl; //通过类名访问
}
int main() {
    test();
    
    Person1 p2; 
    p2.func();
    return 0;
}