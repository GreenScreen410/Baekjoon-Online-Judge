#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string ring_part;
    cin >> ring_part;
    
	int N;
	cin >> N;

    int result;
	while (N--) {
		string ring;
		cin >> ring;
		ring += ring;
        
		if (ring.find(ring_part) != string::npos)
			result += 1;
	}

	cout << result;
}