#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    if (N == 3) cout << "-1";
    
    else {
        for (int i = 2; i < N; i++) {
            cout << i << "\n";
            if (i == N/2) cout << "1\n" << N << "\n";
        }
    }
    
    return 0;
}