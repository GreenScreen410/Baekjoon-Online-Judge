#include <iostream>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    
    if (1LL * N + M - 1 > K) {
        cout << "NO";
    }
    
    else {
        int count = 1;
        cout << "YES\n";
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cout << count << " ";
                count++;
            }
            count = i + 2;
            cout << "\n";
        }
    }

    return 0;
}