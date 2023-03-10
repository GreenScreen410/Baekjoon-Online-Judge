#include <iostream>

using namespace std;

int main() {
    int number;
    
    cin >> number;
    
	for (int i = 1; i <= number; i++) {
		for (int j = 0; j < number - i; j++)
			cout << " ";
			
		for (int j = 0; j < i; j++)
			cout << "*";
			
		cout << "\n";
	}
    
    return 0;
}