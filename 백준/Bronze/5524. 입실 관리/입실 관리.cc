#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        string Si;
        cin >> Si;
        
        for (int j = 0; j < Si.size(); j++) {
            Si[j] = tolower(Si[j]);
        }
        
        cout << Si << "\n";
    }
}