#include <iostream>
#include <string>
using namespace std;

int main() {
    int score = 0;
    cout << "请输入分数：" << endl;
    cin >> score;
    switch (score) {
        case 5:
        case 4:
            cout << "很棒的电影" << endl;
            break;
        case 3:
        case 2:
            cout << "一般的电影" << endl;
            break;
        case 1:
            cout << "很差的电影" << endl;
            break;
        default:
            cout << "无效评分" << endl;
            break;
    }   // switch语句，注意case后面是常量表达式,字符或整数型，不能是变量，且每个case后面要加break，否则会继续执行下一个case
    
    int num = 10;
    while (num <= 20) {
        cout << num << endl;
        num++;
    }   // while循环，先判断条件是否成立，再执行循环体

    int num1 = 10;
    do {
        cout << num1 << endl;
        num1++;
    }
    while (num1 <= 20);
    cout << "num1 = " << num1 << endl; // do...while语句先执行再判断while（条件）
    
    int number = 100;
    do {
        int c = number % 10;
        int b =(number / 10) % 10;
        int a =number / 100; 
        if (a * a * a + b * b * b + c * c * c == number){
            cout << number << endl;
        }
        number++; // number++放在最后，先判断是不是水仙花再加一，且if判断是否相等要用两个==
    }
    while (number < 1000);

    for (int a = 1; a < 20; a++){
        cout << a << endl;
    }  //for 循环 初始化变量；循环条件；循环体

    for (int number1 = 1;number1 <= 100;number1++){
        if (number1 % 10 == 7){
            cout << "敲打桌子" << endl;
        }
        else if (number1 / 10 == 7){
            cout << "敲打桌子" << endl;
        }
        else if (number1 % 7 == 0){
            cout << "敲打桌子" << endl;
        }
        else {
            cout << number1 << endl;
        }
    }
    
    for (int i = 1; i <= 9; i++){
        for (int j = 1; j <= i; j++){
            cout << j << "*" << i << "=" << j * i << "  ";
            } 
            cout << "\n";
    }
        
        int score1[] = {10,20,3};
        cout << score1[2] << endl;
        for (int i1 = 0; i1<3; i1++) {
            cout << score1[i1] << endl;
        }
        // 数组定义的三种方式 int array[元素个数] array[0]=... int array[]=  int array[5]={}不足5个元素自动补0
    cout << "数组所占用的内存空间为：" << sizeof(score1) << endl;
    cout << "单个元素所占用的内存空间为：" << sizeof(score1[0]) << endl;
    cout << "数组中元素个数为：" << sizeof(score1) / sizeof(score1[0]) << endl;
    cout << "数组的首地址为：" << score1 << endl;
    cout << "数组第一个元素地址为：" << &score1[0] << endl;  //&获取地址符
    cout << "数组的首地址为：" << (int)score1 << endl; //将16进制转换为十进制
        return 0;
}
