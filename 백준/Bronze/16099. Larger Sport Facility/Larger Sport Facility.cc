#include <iostream>
using namespace std;

int main() {
    int test_case;
    unsigned long long int lt, wt, le, we;
    cin >> test_case;

    for (int i = 0; i < test_case; i++) {
        cin >> lt >> wt >> le >> we;
        
        if (lt*wt > le*we) {
            cout << "TelecomParisTech\n";
        }
        else if (lt*wt < le*we) {
            cout << "Eurecom\n";
        }
        else {
            cout << "Tie\n";
        }
    }
    
    return 0;
}