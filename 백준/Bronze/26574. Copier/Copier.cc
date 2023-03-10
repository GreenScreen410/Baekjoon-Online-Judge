#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int copy;
        cin >> copy;
        
        cout << copy << " " << copy << endl;
    }

    return 0;
}