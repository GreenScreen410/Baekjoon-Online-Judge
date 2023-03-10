#include <iostream>

using namespace std;

int main() {
	int score[5] = { 0 };
	int sum = 0, average = 0;

	for (int i = 0; i < 5; i++) {
		cin >> score[i];

		if (score[i] < 40) score[i] = 40;

		sum = sum + score[i];
	}

	average = sum / 5;

	cout << average;

	return 0;	
}