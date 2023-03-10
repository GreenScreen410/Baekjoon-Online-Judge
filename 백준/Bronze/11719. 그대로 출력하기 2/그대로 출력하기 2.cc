#include <iostream>
using namespace std;

int main() {
    while (1) {
        if (cin.eof()) break;
        
        string s;
        getline(cin, s);
        
        cout << s << "\n";
    }

    return 0;
}