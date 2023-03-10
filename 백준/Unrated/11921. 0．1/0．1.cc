#include <iostream>
using namespace std;

int main() {
	int N = 0, i;
	long long sum = 0;
    char arr[50000000];
 
	fread(arr, 1, sizeof(arr), stdin);
	for (i=0; arr[i] != '\n' ;i++) {
        N = N * 10 + arr[i] - '0';
    }
	for (int j=0; j < N; j++) {
		int temp = 0;
		for(i++; arr[i] != '\n'; i++) {
            temp = temp * 10 + arr[i] - '0';
        }
		sum += temp;
	}

    cout << N << "\n" << sum;
    
	return 0;
}