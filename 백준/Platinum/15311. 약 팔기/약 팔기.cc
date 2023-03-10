#include <iostream>
using namespace std;

int main() {
    // 아무 역할도 하지 않음
    int N;
    cin >> N;
    
    // 최대 2000개까지 올려놓을 수 있으니 그냥 바로 2000개로 지정
    cout << 2000 << endl;
    
    // 알약 1개 : 그 어떠한 수도 커버할 수 있음
    for (int i = 0; i < 1000; i++) {
        cout << "1" << " "; 
    }

    // 알약 1000개 : 큰 수를 보다 편하게 하기 위해
    for (int i = 0; i < 1000; i++) {
        cout << "1000" << " ";
    }
    
    return 0;
}
 