#include <iostream>
using namespace std;

int main() {
    int T, S;
    cin >> T >> S;
    
    if ((T < 12) || (16 < T) || (S == 1)) cout << "280";
    else cout << "320";
    
    return 0;
}