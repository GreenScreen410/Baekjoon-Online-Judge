#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  
	int T;
    cin >> T;

	vector<int> dp;
	dp.push_back(0);
	dp.push_back(1);
    dp.push_back(2);
    dp.push_back(4);
  
	for (int i = 4; i < 12; i++) {
		dp.push_back((dp[i - 1] + dp[i - 2] + dp[i - 3]));
	}
  
    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;
        cout << dp[n] << "\n";
    }
  
	return 0;
}
