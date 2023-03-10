#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
	    int l, n;
	    cin >> l >> n;
	    
	    int ml = 0;
	    int mn = 0;
	    for (int i = 0; i < n; i++) {
	        int t;
	        cin >> t;
	        mn = max(mn, min(t, l-t));
	        ml = max(ml, max(t, l-t));
	    }
	    
	    cout << mn << " " << ml << endl;
	}
}