#include <iostream>
#include <vector>
using namespace std;
int main() {
    string str("some string");
    for (auto &c : str) {
        c = toupper(c);
    }
    cout << str << endl;
    
    vector<int> vec{1, 2, 3, 4, 5};
    for (auto &i : vec) {
        i *= 2;
    }
    for (auto i : vec) {
        cout << i << " ";
    }

    vector<int> vec2(11, 0);
    int grade;
    while (true) {
        cout << "请输入成绩：" << endl;
        if (!(cin >> grade)) {
            break;
        }
        if (grade <= 100) {
            ++vec2[grade / 10];
        }
    }
    for (int i = 0; i < vec2.size()-1; ++i) {
        cout << i * 10 << "-" << (i * 10 + 9) << ": " << vec2[i] << endl;
    }
        cout << "100: " << vec2[10] << endl;
    return 0;
}