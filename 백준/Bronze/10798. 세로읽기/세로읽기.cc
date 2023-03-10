#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 다섯줄 입력받기
    string word[5];
    for (int i = 0; i < 5; i++) {
        cin >> word[i];
    }
    
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < word[j].size()) {
                // i와 j의 자리 바꿈 => 배열 90도 회전
                cout << word[j][i];
            }
        }
    }
    
    return 0;
}