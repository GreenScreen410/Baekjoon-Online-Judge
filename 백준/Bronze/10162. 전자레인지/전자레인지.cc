#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
	int T;
	cin >> T;

    int A, B, C;
	if (T % 10 != 0) {
        cout << "-1";
    }
	else {
		A = T / 300;
		B = (T % 300) / 60;
		C = ((T % 300) % 60) / 10;
        
		cout << A << " " << B << " " << C;
	}

	return 0;
}