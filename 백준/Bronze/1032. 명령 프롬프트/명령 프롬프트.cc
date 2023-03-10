#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int N;
    scanf("%d", &N);
    
    string files[50];
    for(int i = 0; i < N; i++) {
        cin >> files[i];
    }
    
    char filter;
    for(int i = 0; i < files[0].length(); i++) {
        filter = files[0][i];
        
        for(int j = 0; j < N; j++) {
            if(filter != files[j][i]) {
                
                filter = '?';
                break;
            }
        }    
        
        cout << filter;    
    }
}