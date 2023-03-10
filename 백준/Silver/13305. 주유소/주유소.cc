#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
long long oil[100000];
long long cost[100000];

int main() {
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> oil[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> cost[i];
    }
    
    long long now = cost[0];
    long long answer = now * oil[0];
    for (int i = 1; i < N; i++) {
        now = min(now, cost[i]);
        answer += now * oil[i];
    }
    
    cout << answer;
    
    return 0;
}