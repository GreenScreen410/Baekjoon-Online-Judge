#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;

  // 1이면 아무것도 출력하지 말라고 했으니
  if (N == 1) return 0;

  // 소수는 2부터 시작
  for (int i = 2; i <= N; i++) {
    while (N % i == 0) {
      cout << i << endl;
      N /= i;
    }
  }

  return 0;
}