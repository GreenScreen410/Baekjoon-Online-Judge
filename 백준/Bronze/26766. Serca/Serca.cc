#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string heart = " @@@   @@@ \n@   @ @   @\n@    @    @\n@         @\n @       @ \n  @     @  \n   @   @   \n    @ @    \n     @     \n";
    
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cout << heart;
    }
    
    return 0;
}