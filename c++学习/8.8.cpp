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
        bool b = true;
    cout << b << endl;
    double a1 = 3.5;
    double a2 = 4.5;
    cout << a1 / a2 << endl;
    char cha = 0;
    cout << "请输入字符cha：" << endl;
    cin >> cha;
    cout << "您输入的字符cha是：" << cha << endl;
    int num1 = 10;
    cout << num1++ * 2 << endl;
    // 此时num1的值为11，输出结果为20，x++是后置自增运算符，先使用num1的值再自增，故下方输出结果为22
    cout << ++num1 * 2 << endl;  
    int num2 = 10;
    int num3 = 20;
    cout << (!num2 && !num3) << endl;
    cout << (!num2 || !num3) << endl;
    // 与或非运算 && || ！，返回值为bool类型，注意运算顺序！> << > &&
    int score = 0;
    cout << "请输入分数：" << endl;
    cin >> score;
    if (score >= 600) 
    {
        if (score > 700)
        {
            cout << "进入北大" << endl;
        }
        else if (score > 650)
        {
            cout << "进入清华" << endl;
        }
        else
        {
            cout << "进入人大" << endl;
        }
    }
    else if (score >= 500)
    {
        cout << "考入二本" << endl;
    }
    else
    {
        cout << "我没考上" << endl;
    }
    // if-elseif-else语句
    int b1 = 10;
    int b2 = 20;
    int b3 = 30;
    int b4 = 0;
    b4 = (b1 > b2 ? b3 : b2);
    cout << b4 << endl;
    // 三目运算符，满足条件则返回b3，否则返回b2。返回的是字符，可以继续进行赋值
    return 0;
}