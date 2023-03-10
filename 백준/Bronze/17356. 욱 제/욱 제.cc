#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double A, B;
    cin >> A >> B;
    
    double M = (B - A) / 400;
    printf("%.20f", 1 / (1 + pow(10, M)));
    
    return 0;
}