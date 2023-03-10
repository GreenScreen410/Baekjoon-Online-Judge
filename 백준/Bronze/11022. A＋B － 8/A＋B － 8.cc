#include<iostream>

using namespace std;

int main() {
    int amount, A, B;
    
    cin >> amount;
    
    for (int i = 0; i < amount; i++) {
        cin >> A >> B;
        cout << "Case #" << i + 1 << ": " << A << " + " << B << " = " << A + B << "\n";
    }
    
    return 0;
}