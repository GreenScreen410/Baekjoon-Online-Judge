#include <iostream>
using namespace std;

int main() {
    string N;
    cin >> N;
    
    if (N[0] == N[1]) cout << "1";
    else cout << "0";
    
    return 0;
}