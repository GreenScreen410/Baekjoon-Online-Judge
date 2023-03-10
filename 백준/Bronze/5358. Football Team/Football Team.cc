#include <iostream>
using namespace std;

int main() {
    while(1) {
        if(cin.eof()) break;
        string name;
        getline(cin, name);
        
        for (int i = 0; i < name.size(); i++) {
            if (name[i] == 'i') {
                name[i] = 'e';
                continue;
            }
            if (name[i] == 'e') {
                name[i] = 'i';
                continue;
            }
            if (name[i] == 'I') {
                name[i] = 'E';
                continue;
            }
            if (name[i] == 'E') {
                name[i] = 'I';
                continue;
            }
        }
        
        cout << name << "\n";
    }

    return 0;
}