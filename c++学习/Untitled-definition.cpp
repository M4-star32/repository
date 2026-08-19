#include <iostream>
using namespace std;

/*
*常量的的定义
1. 使用 const 关键字定义常量
    const 数据类型 常量名 = 常量值;
2. 使用 #define 预处理指令定义常量
    #define 常量名 常量值
    #define MAX 100; // 定义一个宏常量 MAX，值为 100
*/

int main() {
    const int MAX_VALUE = 100; // 定义一个整型常量 MAX_VALUE，值为 100'
    #define PI 3.14159 // 定义一个宏常量 PI，值为 3.14159
    cout << "常量 MAX_VALUE 的值为: " << MAX_VALUE << endl;
    cout << "常量 PI 的值为：" << PI << endl;
    return 0;
}