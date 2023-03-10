#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t ; i++) {
        int a, b;
        cin >> a >> b;
        
        if (a == 1 && b == 1) cout << "1\n";
        else cout << "2\n";
    }
    
    return 0;
}