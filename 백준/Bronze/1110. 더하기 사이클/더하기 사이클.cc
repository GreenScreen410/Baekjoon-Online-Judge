#include <iostream>
 
using namespace std;
 
int main() {
	int newNumber, number;
	int count = 0;
	
	cin >> newNumber;
 
	number = newNumber;
 
	do {
		number = (number % 10) * 10 + ((number / 10) + (number % 10)) % 10;
 
		count++;
		
	} while (newNumber != number);
 
	cout << count;
	
	return 0;
}