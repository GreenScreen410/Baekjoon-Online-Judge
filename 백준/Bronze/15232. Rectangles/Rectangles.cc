#include <iostream>
using namespace std;

int main() {
    int R;
    cin >> R;
    
    int C;
    cin >> C;
    
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
           cout << "*";
        }
    
        cout << "\n";
    }
    
    return 0;
}