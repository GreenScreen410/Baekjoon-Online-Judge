#include <iostream>
#include <string>
using namespace std;

int main() {
    int N = 0;
    cin >> N;
    
    int count = 0;
    string gifticon;
    for (int i = 0; i < N; i++) {
        cin >> gifticon;
        gifticon = gifticon.substr(2);
        
        if (stoi(gifticon) <= 90) count += 1;
    }
    
    cout << count;
    
    return 0;
}