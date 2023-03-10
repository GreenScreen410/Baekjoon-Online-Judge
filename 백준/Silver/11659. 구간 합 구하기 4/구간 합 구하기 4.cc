#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> N >> M;

    int temp = 0;    
    vector<int> v(100001);
    vector<int> sum(100001);
    for (int i = 1; i <= N; i++) {
        cin >> v[i];
        temp += v[i];
        sum[i] += temp;
    }
    
    while (M--) {
        int i, j;
        cin >> i >> j;
        
        cout << sum[j] - sum[i - 1] << "\n";
    }
}