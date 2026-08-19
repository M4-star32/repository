#include <iostream>
using namespace std;
#include <string>

class Phone{
public:
    Phone(string name){
        m_phonename = name;
    }
    string m_phonename;
};

class Person{
public:
    Person(string name, string phonename)
    : m_name(name), m_phone(phonename)
{}
    string m_name;
    Phone m_phone;

    void playgame(){
    cout << m_name << "使用" << m_phone.m_phonename << "牌手机" << endl;
}
};


void test01(){
    Person p("张三", "苹果");
    p.playgame();
}
int main() {

    test01();
    return 0;
}