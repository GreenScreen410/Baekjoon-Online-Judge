#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  
  int count = 0;
  vector<int> prime(N + 1);

  for (int i = 2; i <= N; i++) {
    prime[i] = i;
  }

  for (int i = 2; i <= N; i++) {
    for (int j = i; j <= N; j += i) {
      if (prime[j] != 0) {
        prime[j] = 0;
        count++;

        if (K == count) {
          cout << j << "\n";
          return 0;
        }
      }
    }
  }
  
  return 0;
}