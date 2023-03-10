#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int player[4];
    for (int i = 0; i < 4; i++) {
        cin >> player[i];
    }
    
    sort(player, player+4);
    
    cout << abs((player[0] + player[3]) - (player[1] + player[2]));
    
    return 0;
}