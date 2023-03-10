#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    if (N % 6 == 2) {
        for (int i = 1; i < (N / 2 + 1); i++) {
            cout << i * 2 << "\n";
        }
        cout << "3" << "\n";
        cout << "1" << "\n";
        for (int i = 3; i < (N / 2); i++) {
            cout << i * 2 + 1 << "\n";
        }
        cout << "5" << "\n";
    }
    
    else if (N % 6 == 3) {
        for (int i = 2; i < (N / 2 + 1); i++) {
            cout << i * 2 << "\n";
        }
        cout << "2" << "\n";
        for (int i = 2; i < (N / 2 + 1); i++) {
            cout << i * 2 + 1 << "\n";
        }
        cout << "1" << "\n";
        cout << "3" << "\n";
    }
    
    else {
        for (int i = 1; i < (N / 2 + 1); i++) {
            cout << i + (N / 2) << "\n";
            cout << i << "\n";
        }
        
        if (N & 1) {
            cout << N << "\n";
        }
    }

    return 0;
}