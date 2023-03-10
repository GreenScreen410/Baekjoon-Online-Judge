#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    
    while (1) {
        int money;
        cin >> money;
        
        if (money == -1) {
            cout << sum;
            break;
        }
        
        sum += money;
    }

    return 0;
}