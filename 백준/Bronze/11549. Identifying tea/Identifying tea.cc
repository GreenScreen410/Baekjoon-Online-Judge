#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    vector<int> v(5);
    for (int i = 0; i < 5; i++) {
        cin >> v[i];
    }
    
    int answer = 0;
    for (int i = 0; i < 5; i++) {
        if (v[i] == T) answer++;
    }
    
    cout << answer;

    return 0;
}