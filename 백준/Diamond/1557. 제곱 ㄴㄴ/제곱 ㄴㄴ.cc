#include <iostream>
#define MAX 50000
using namespace std;

long long arr[MAX] = {0};

long long solve(long long k) {
    long long cnt = 0;
    for (long long i = 1; i*i <= k; i++) {
        cnt += arr[i]*k / (i*i);
    }
    return cnt;
}

int main() {
    long long K;
    cin >> K;
	
    arr[1] = 1;
    for (int i = 1; i <= MAX; i++) {
        for (int j = 2*i; j <= MAX; j += i) {
            arr[j] -= arr[i];
        }
    }

    long long first = 0, last = K*2;
    while (first < last - 1) {
        long long mid = (first + last) / 2;
        if (solve(mid) < K) first = mid;
        else last = mid;
    }
    
    cout << last << "\n";
    
    return 0;
}