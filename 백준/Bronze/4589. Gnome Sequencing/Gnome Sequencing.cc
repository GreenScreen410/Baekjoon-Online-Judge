#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
    int T, x, y, z;

	cout << "Gnomes:\n";
    
	cin >> T;
    
	while (T--) {
		 cin >> x >> y >> z;
		if ((x < y && y < z) || (x > y && y > z)) {
            cout << "Ordered\n";
        } else {
            cout << "Unordered\n";
        }
	}
    
    return 0;
}