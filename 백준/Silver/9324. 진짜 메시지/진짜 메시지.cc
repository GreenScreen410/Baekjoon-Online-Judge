#include <iostream>
#include <string>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    
    for (int i = 0; i < testCase; i++) {
        int OK = 1;
        string message;
        cin >> message;
        
        int alphabets[26] = { 0 };
        for (int j = 0; j < message.length(); j++) {
            alphabets[message[j] - 'A']++;
            
            if (alphabets[message[j] - 'A'] == 3) {
                if (j == message.length() - 1) {
                    OK = 0;
                    break;
                }
                
                else if (message[j+1] != message[j]) {
                    OK = 0;
                    break;
                }
                
                j++;
                alphabets[message[j] - 'A'] = 0;
            }
        }
        
        if (OK) cout << "OK\n";
        else cout << "FAKE\n";
    }

    return 0;
}