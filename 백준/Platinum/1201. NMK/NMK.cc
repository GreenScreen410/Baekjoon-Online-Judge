#include <iostream>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    if (N > M * K || N + 1 < M + K) {
        cout << "-1";
        return 0;
    }
    
    int sequence[N+1];
    for (int i = 1; i <= N; i++) {
        sequence[i] = i;
    }
    
    int start = 1;
    for (int i = 1; i <= M; i++) {
        int temp = min(start+K, N-M+i+1);
        reverse(sequence+start, sequence+temp);
        start = temp;
    }
        
    for (int i = 1; i <= N; i++) {
        cout << sequence[i] << " ";
    }
    
    return 0;
}