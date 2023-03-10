#include <iostream>
#include <cmath>
using namespace std;

int map[15];
int N, answer = 0;

void queen(int x) {
    if (N == x) {
        answer++;
    }
    
    else {
        for (int i = 0; i < N; i++) {
            map[x] = i;
            bool canPlace = true;
            
            for (int j = 0; j < x; j++) {
                if (map[x] == map[j] || abs(map[x] - map[j]) == x - j) {
                    canPlace = false;
                    break;
                }
            }
            
            if (canPlace) {
                queen(x + 1);
            }     
        }
    }
}
 
int main() {
    cin >> N;
    
    queen(0);
    cout << answer;
    
    return 0;
}
