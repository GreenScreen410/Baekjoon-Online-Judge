#include <iostream>
using namespace std;

int main() {
    int A;
    cin >> A;
    
    int B;
    cin >> B;
    
    if (A > B) cout << "1";
    else if (A == B) cout << "0";
    else cout << "-1";
    
    return 0;
}