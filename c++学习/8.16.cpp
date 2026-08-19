#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> scores = {"F","D","C","B","A","A++"};
    string scoreletter;
    vector<string> allscoreletter;
    int grade;
    while (true) {
        cout << "请输入成绩：" << endl;
        if (!(cin >> grade)) {
            break;
        }
        if (grade < 60){
            scoreletter = scores[0];
    }
        else {
            scoreletter = scores[(grade-50) / 10] ;
            if (grade % 10 >= 8) {
                scoreletter += "+";
            }
            else if (grade % 10 <= 2 && grade != 100) {
                scoreletter += "-";
            }
    }
    allscoreletter.push_back(scoreletter);
        cout << scoreletter << endl;
    }
    for (string score : allscoreletter) {
        cout << score << " ";
    }

    return 0;
}