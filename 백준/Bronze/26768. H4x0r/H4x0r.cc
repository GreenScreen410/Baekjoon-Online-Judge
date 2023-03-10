#include <iostream>
#include <regex>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    s = regex_replace(s, regex("a"), "4");
    s = regex_replace(s, regex("e"), "3");
    s = regex_replace(s, regex("i"), "1");
    s = regex_replace(s, regex("o"), "0");
    s = regex_replace(s, regex("s"), "5");
    
    cout << s;
    
    return 0;
}