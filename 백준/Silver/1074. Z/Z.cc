#include <iostream>
using namespace std;
int n, r, c, answer;

void Z(int y, int x, int size) {
    if (y == r && x == c) {
        cout << answer << "\n";
        return;
    }

    if (r < y + size && r >= y && c < x + size && c >= x) {
        Z(y, x, size / 2);
        Z(y, x + size / 2, size / 2);
        Z(y + size / 2, x, size / 2);
        Z(y + size / 2, x + size / 2, size / 2);
    }
    else {
        answer += size * size;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n >> r >> c;
    Z(0, 0, (1 << n));
    
    return 0;
}