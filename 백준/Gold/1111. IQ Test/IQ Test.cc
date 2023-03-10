#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    
    if (N == 1) {
        // 수열의 크기가 1, 다음 수가 무엇인지 예측할 수 없다
        cout << "A";
        return 0;
    }
    
    if (N == 2) {
        // 수열의 크기가 2이면서 같은 수
        if (v[0] == v[1]) cout << v[1];
        // 수열의 크기가 2이면서 다른 수일 경우
        else cout << "A";
        
        return 0;
    }
    
    else {
        int a = 0;
        if (v[1] - v[0] != 0) a = ((v[2] - v[1]) / (v[1] - v[0]));
        
        int b = v[1] - v[0] * a;
        for (int i = 1; i < N; i++) {
            if (v[i] != v[i-1] * a + b) {
                // 패턴이 없는 수열인 경우
                cout << "B";
                return 0;
            }
        }
        
        // 패턴을 만족하는 수열인 경우
        cout << v[N-1] * a + b;
    }
    
    return 0;
}