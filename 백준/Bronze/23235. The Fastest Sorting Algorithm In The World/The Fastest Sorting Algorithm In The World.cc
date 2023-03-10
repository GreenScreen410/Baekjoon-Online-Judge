#include <iostream>
using namespace std;

int main() {
    string list;
    
    for(int i = 1;;i++) {
        getline(cin, list);
        
        if (list == "0") break;
        
        cout << "Case " << i << ": Sorting... done!\n";
    }

    return 0;
}
