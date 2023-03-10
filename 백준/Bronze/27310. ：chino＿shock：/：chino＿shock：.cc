#include <iostream>
using namespace std;

int main() {
    string emoji;
    cin >> emoji;
    
    int emoji_length = emoji.size();
    
    int emoji_underbar = 0;
    for (int i = 0; i < emoji_length; i++) {
        if (emoji[i] == '_') emoji_underbar++;
    }
    
    cout << emoji_length + 2 + emoji_underbar * 5;

    return 0;
}