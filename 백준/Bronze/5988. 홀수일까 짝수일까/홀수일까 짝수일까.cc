#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        string K;
        cin >> K;
        
        if (K[K.size()-1] % 2 == 0) {
            cout << "even\n";
        }
        
        else {
            cout << "odd\n";
        }
    }

    return 0;
}