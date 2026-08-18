#include <iostream>
using namespace std;
struct student{
    string name;
    int age;
    int score;
};
void swap1(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout << x << "\t" << y << endl;
}
void swap2(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
void swap3(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}
void fun(int x1, int y1){
    cout << "只填入数据类型进行占位" << endl; 
}                                                       //在函数定义中如果前面的参数定义了默认值则后面的参数也必须定义默认值
int main() {
    struct student s1;
    s1.name = "John";
    s1.age = 20;
    s1.score = 90;
    cout << "Name: " << s1.name << "\t Age: " << s1.age << "\t Score: " << s1.score << endl;
    
    struct student s2 = {"Alice", 22, 0};
    cout << "Name: " << s2.name << "\t Age: " << s2.age << "\t Score: " << s2.score << endl;

    int a = 10;
    int &a1 = a; // a1 is a reference to a
    int b = 20,b1 = 30;
    swap1(b, b1);
    cout << "After swap: b = " << b << ", b1 = " << b1 << endl; // 值传递
    // swap2(&b,&b1);
    // cout << "After swap: b = " << b << ", b1 = " << b1 << endl; // 地址传递
    swap3(b, b1);
    cout << "After swap: b = " << b << ", b1 = " << b1 << endl; // 引用传递

    fun(10,20);
    //函数重载：可以定义相同的函数名，但是参数列表（数据类型、参数个数）必须不同，返回值类型可以相同也可以不同
    return 0;
}