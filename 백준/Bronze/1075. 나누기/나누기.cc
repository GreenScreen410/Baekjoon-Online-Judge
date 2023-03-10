#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
	int N, F;
    
	cin >> N >> F;
	
	if (F == 100) {
		cout << "00"; 
		return 0;
	}
	
	int a = N - N % 100;
	int b = a - a % F;
	
	if (b % 100 == 0) {
		cout << "00";
		return 0;
	}
	
	cout.width(2);
	cout.fill('0');
    
	cout << (b + F) % 100;
	
	return 0;
} 