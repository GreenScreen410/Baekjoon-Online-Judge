#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();
    
    for (int n = 0; n < N; n++) {
        string sentence;
        getline(cin, sentence);
        
        for (int i = 0; i < sentence.size(); i++) {
            if (i == 0 && 97 <= sentence[i] && 122) {
                sentence[i] -= 32;
            }
        }
        
        cout << sentence << "\n";
    }

    return 0;
}