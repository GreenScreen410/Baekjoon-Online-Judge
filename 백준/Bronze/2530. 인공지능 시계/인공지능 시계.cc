#include <iostream>

using namespace std;

int main() {
	int H, M, S, T;
    
	cin >> H >> M >> S >> T;
	
	S += T;
	M += S / 60;
	H += M / 60;

	cout << H%24 << " " << M%60 << " " << S%60;
}