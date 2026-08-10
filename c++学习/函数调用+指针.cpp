#include <iostream>
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

    int *p2 = nullptr; // 初始化指针为nullptr

    const int *p3 = &a; // const修饰指针，不能通过p3修改a的值
    p3 = &b; // 可以改变p3指向的地址，但不能通过p3修改值

    int * const p4 = &a; // const修饰变量，可以修改地址
    *p4 = 20; // 修改a的值

    const int * const p5 = &a; // const修饰指针和变量，不能修改地址和值

    int arr[5] = {1, 5, 7, 3, 5};
    int *p6 = arr; // 指针指向数组首元素
    cout << *p6 << endl; // 输出数组首元素的值
    for (int i = 0; i < 5; i++) {
        cout << *(p6 + i) << "\n"; // p6是地址，通过地址增加4个字节访问数组元素
    }                             //利用for循环遍历数组元素

    int x = 5, y = 10;
    swap(&x, &y); // 传递x和y的地址给swap函数
    cout << "x: " << x << ", y: " << y << endl; //地址传递，会改变实参值，如果是值传递则不会改变实参值

    return 0;       
}