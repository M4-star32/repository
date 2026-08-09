#include <iostream>
#include <string>
using namespace std;
 
    int add(int num1 , int num2)
    {
        int sum = num1 + num2;
        return sum;
    }
int main() {
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    }; 
    cout << "二维数组占用内存空间大小：" << sizeof(arr) << endl;
    cout << "二维数组一行的大小：" << sizeof(arr[0]) << endl;
    cout << "二维数组单个元素所占用大小：" << sizeof(arr[0][0]) << endl;
    cout << "二维数组的行数和列数分别为：" << sizeof(arr) / sizeof(arr[0]) << "和" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
    cout << "二维数组首地址：" << arr << endl;
    cout << "二维数组第二行元素地址：" << arr[1] << endl;
    cout << "二维数组的第一个元素地址：" << &arr[0][0] << endl;
    
    int array[3][3]{
        {100,100,100},
        {90,50,100},
        {60,70,80},
    };
    string names[3] = {"张三","李四","王五"};
    for (int i = 0; i < 3; i++ ){
        int sum = 0;
        for (int j = 0; j < 3; j++){
            sum += array[i][j];
        }
        cout << names[i] << "同学的总成绩为：" << sum << endl;
    }

    int a = 1;
    int b = 2;
    int sum = add(a, b);
    cout << sum << endl;

    return 0;
 }