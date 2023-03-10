#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int K, T;
    cin >> K >> T;
    
    for (int i = 0; i < T; i++) {
        int M, N;
        cin >> M >> N;
        
        if (M == N) {
            cout << "1\n";
            continue;
        }
        
        int a = K - max(M, N);
        int b = abs(M - N);
        
        if (M > N && b - a <= 2) {
            cout << "1\n";
        }
        else if (M < N && b - a <= 1) {
            cout << "1\n";
        }
        else {
            cout << "0\n";
        }
    }
}