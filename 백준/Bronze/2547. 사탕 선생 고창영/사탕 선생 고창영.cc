#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;

		long long candySum = 0;
		for (int j = 0; j < N; j++)	{
			long long candy;
			cin >> candy;

			candySum = (candySum + candy) % N;
		}

        if (candySum % N) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
	}

	return 0;
}