#include <iostream>

using namespace std;

int main() {
	int h = 0, m = 0, minutes = 0;
	int newH = 0, newM = 0;
    
	cin >> h >> m;
	cin >> minutes;

	newH = h;
	newM = m + minutes;

	if (newM > 59) {
		newH = newH + (newM / 60);
		newM = newM % 60;
	}

	newH = newH % 24;

	cout << newH << " " << newM;
    
	return 0;
}