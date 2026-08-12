#include <iostream>
using namespace std;
class Circle{
    public:
    int radius;
    const double PI = 3.14;
    double length(){
        return 2*PI*radius;
    }
};
class Student{
    public:
    string name;
    int m_id;
    void fun(){
        cout << "Student name: " << name << ", id: " << m_id << endl;
    }
};
int main() {
    Circle c1;
    c1.radius = 1;
    cout << "Circle length: " << c1.length() << endl;
    Student s1;
    s1.name = "张三";
    s1.m_id = 12345;
    s1.fun();
    return 0;
};