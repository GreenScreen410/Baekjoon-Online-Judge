#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    int coin[10];
    for (int i = 0; i < N; i++) {
        cin >> coin[i];
    }
    
    int amount = 0;
    for (int i = N-1; i >= 0; i--) {
        amount += K / coin[i];
        K = K % coin[i];
    }
    
    cout << amount;

    return 0;
}