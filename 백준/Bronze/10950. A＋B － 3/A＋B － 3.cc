#include <iostream>

using namespace std;

int main() {
    int amount, A, B;
    
    cin >> amount;
    
    for (int i = 0; i < amount; i++) {
        cin >> A >> B;
        cout << A + B << "\n";
    }
    
    return 0;
}