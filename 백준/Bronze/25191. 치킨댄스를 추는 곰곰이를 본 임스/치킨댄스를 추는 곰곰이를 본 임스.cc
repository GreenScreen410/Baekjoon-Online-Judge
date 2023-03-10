#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int chicken, coke, beer;
    
    cin >> chicken >> coke >> beer;
    
    cout << min(chicken, coke / 2 + beer);
    
    return 0;
}