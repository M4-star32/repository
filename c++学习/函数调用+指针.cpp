#include <iostream>
#include "calculator.h"
using namespace std;

void swap(int *x, int *y) {
    int temp = *x; // 解引用指针，获取值
    *x = *y;       // 将y的值赋给x
    *y = temp;     // 将temp的值赋给y
}
int main() {
    int a = 10;
    int *p = & a;
    cout << "Value of a: " << *p << endl;
    cout << "Address of a: " << p << endl;

	int b = 10;
    int *p1 = &b;
	cout << *p1 << endl; //* 解引用

    // const int *p3 = &a; // const修饰指针，不能通过p3修改a的值
    // p3 = &b; // 可以改变p3指向的地址，但不能通过p3修改值
    int i1 = 10;
    int i2 = 20;
    const int *p2 = &i1; // const修饰指针，不能通过p2修改i1的值
    p2 = &i2; // 可以改变p2指向的地址，但不能通过p2修改值
    cout << "*p2的值为：" << *p2 << endl; // 输出i2的值

    int * const p4 = &a; // const修饰变量，可以修改地址
    *p4 = 20; // 修改a的值

    // const int * const p5 = &a; // const修饰指针和变量，不能修改地址和值

    int arr[5] = {1, 5, 7, 3, 5};
    int *p6 = arr; // 指针指向数组首元素
    cout << *p6 << endl; // 输出数组首元素的值
    for (int i = 0; i < 5; i++) {
        cout << *p6 << "\n"; // p6是地址，通过地址增加4个字节访问数组元素
        p6++; // 指针后移，指向下一个元素
    }                             //利用for循环遍历数组元素

    int x = 5, y = 10;
    swap(&x, &y); // 传递x和y的地址给swap函数
    cout << "x: " << x << ", y: " << y << endl; //地址传递，会改变实参值，如果是值传递则不会改变实参值
    return 0;
}