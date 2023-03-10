#include <iostream> 

using namespace std;

int bajigiri(int a, int b, int c, int d, int x) {
	 return max(a * ((x - b) * (x - b)) + c, d);
}
int main() {
	int a, b, c, d; cin >> a >> b >> c >> d;
	int n; cin >> n;
	int count_ = 0;
	for (int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;

		if (x == bajigiri(a, b, c, d, y)) { count_++; }
	}

	cout << count_;
}