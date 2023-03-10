#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
    
	while (T--) {
		int N;
		cin >> N;
        
		if (N == 1 || N == 2 || N == 3 || N == 6) {
            cout << "0\n";
        }
		else if (N == 4) {
            cout << "2\n";
        }
		else {
            cout << "1\n";
        }
	}
    
    return 0;
}