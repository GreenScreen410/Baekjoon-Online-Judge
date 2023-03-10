#include <iostream>

using namespace std;
typedef long long int ll;

ll arr[2000000], n;

int main() {
    cin >> n;
    
    ll sum = 0;
    for (ll i = 1; i <= n; i++) {
        cin >> arr[i];
        sum += arr[i];
        arr[i + n] = arr[i];
    }
    
    ll ans = 0;
    for (ll i = 1; i <= n; i++) {
        ll val = 0;
        
        for (ll j = i; j < i + n; j++) {
            val += arr[j];
            
            if (val < 0) {
                ll x = -val;
                ans += (x - 1) / sum + 1;
            }
        }
    }
    
    cout << ans;
}