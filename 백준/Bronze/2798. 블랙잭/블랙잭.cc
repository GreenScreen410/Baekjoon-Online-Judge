#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M, result = 0;
	cin >> N >> M;
    
    int cards[101];
	for (int i = 0; i < N; i++)
		cin >> cards[i];

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				if (cards[i] + cards[j] + cards[k] <= M && cards[i] + cards[j] + cards[k] > result) {
                    result = cards[i] + cards[j] + cards[k];
                }
			}
		}
	}
	cout << result << endl;
}