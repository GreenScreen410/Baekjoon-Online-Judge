#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio;
    cin.tie(0);
    cout.tie(0);
    
    long long n;
    cin >> n;
    
    long long euler = n;
    for (long long p = 2; p*p <= n; p++) {
        if (n % p == 0) {
            euler = euler / p * (p - 1);
        }
        
        while (n % p == 0) n = n / p;
    }
    
    if (n == 1) {
        cout << euler;
    }
    else {
        cout << euler / n * (n - 1);
    }
}