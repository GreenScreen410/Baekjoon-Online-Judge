#include <iostream>
#include <vector>
using namespace std;

int main() {
    string N;
    cin >> N;
    
    int set[10] = {0};
 
    for(int i = 0; i < N.size(); i++){
        set[N[i] - '0']++;
    }
 
    int answer = 0;
    for(int i = 0; i < 10; i++){
        if (i != 9 &&  i != 6) answer = max(answer, set[i]);
    }
    
    cout << max(answer, (set[6] + set[9] + 1) / 2);
    
    return 0;
}