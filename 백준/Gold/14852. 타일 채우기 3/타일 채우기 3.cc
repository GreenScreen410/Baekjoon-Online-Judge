#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  vector<int> dp(1000000);
  int N;
  cin >> N;

  dp[0] = 1;
  dp[1] = 2;
  dp[2] = 7;

  long long int count = dp[0] + dp[1] + dp[2];
  for (int i = 3; i <= N; i++) {
    dp[i] = (count * 2 + dp[i - 2]) % 1000000007;
    count += dp[i];
    count %= 1000000007;
  }

  cout << dp[N] % 1000000007;

  return 0;
}
