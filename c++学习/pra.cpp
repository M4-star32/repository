#include <iostream> 
using namespace std;

class Person{
public:
    Person (int age){
        this -> age = age;
    }
    int age;
    Person& add(Person a) {
        this -> age += a.age;
    }
};

void test1 () {
    Person p1(10);
    cout << "p1.age = " << p1.age << endl;

    Person p2(5);
    p2.add(p1).add(p1); {
    cout << "p2.age = " << p2.age << endl;
    }                                       // 定义函数时返回值时类名取址可以继续调用函数
}

int main() {
    test1();
    return 0;
}