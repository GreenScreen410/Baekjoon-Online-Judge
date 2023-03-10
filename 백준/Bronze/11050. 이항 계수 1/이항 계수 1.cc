#include <iostream>
using namespace std;
 
int factorial(int n) {
    int answer = 1;
    for (int i = 1; i <= n; i++) {
        answer *= i;
    }
    return answer;
}
 
int main() {
    int N, K;
    cin >> N >> K;
 
    int result = factorial(N) / (factorial(K) * factorial(N - K));
 
    cout << result;
}