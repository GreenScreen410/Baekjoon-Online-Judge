#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string text;
    cin >> text;
    
    string bomb;
    cin >> bomb;
    
    vector<char> v;
    for (int i = 0; i < text.size(); i++) {
        v.push_back(text[i]);

        if (v.size() >= bomb.size()) {
            int canBomb = 1;
            
            for (int i = 0; i < bomb.size(); i++) {
                if (v[i + v.size() - bomb.size()] != bomb[i]) {
                    canBomb = 0;
                    break;
                }
            }
            
            if (canBomb) {
                for (int i = 0; i < bomb.size(); i++){
                    v.pop_back();
                }
            }
        }
    }
    
    if (v.size() == 0) {
        cout << "FRULA";
    }
    else {
        for (int i = 0; i < v.size(); i++) {
           cout << v[i];
        }
    }
    
    return 0;
}