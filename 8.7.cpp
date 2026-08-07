#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << sizeof(int) << " bytes\n";
    // 统计数据类型所占用字节数
    float f = 3.1415926f;
    cout << "f的值为：" << f << endl;
    // 小数最多显示6位有效数字
    cout << sizeof(float) << " bytes\n";
    // float是单精度，占用4个字节
    cout << sizeof(double) << " bytes\n";
    // double是双精度，占用8个字节
    char c = 'A';
    cout << sizeof(c) << " bytes\n";
    // char占用1个字节，字符用单引号
    cout << (int)c << endl;
    // 输出字符'A'的ASCII码值
    string str = "Hello, World!";
    // 使用string字符串时注意加头文件，定义字符串时用双引号
    cout << str << endl;
    return 0;
}