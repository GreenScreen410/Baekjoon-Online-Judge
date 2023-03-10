#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (1) {
        int input;
        cin >> input;
        
        if (input == 0) break;
        
        if (input % n == 0) {
            cout << input << " is a multiple of " << n << "." << "\n";
        }
        else {
            cout << input << " is NOT a multiple of " << n << "." << "\n";
        }
    }

    return 0;
}