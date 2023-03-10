#include <iostream>

using namespace std;

int main() {
    int amount = 0;
    
    cin >> amount;
    
    for (int i = amount; i > 0; i--) {
        cout << amount << "\n";
        amount--;
    }
    
    return 0;
}