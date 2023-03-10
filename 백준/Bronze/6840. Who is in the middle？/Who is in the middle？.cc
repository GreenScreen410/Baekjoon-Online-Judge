#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;
    
    int middle;
    middle = (A >= B && A <= C) ? A : 
             (B >= A && B <= C) ? B :
             (C >= A && C <= B) ? C : 
             (A >= C && A <= B) ? A :
             (B >= C && A >= C) ? B : C;
    
    cout << middle;
    
    return 0;
}