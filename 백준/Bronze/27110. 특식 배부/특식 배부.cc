#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> v;
    int A, B, C;
    cin >> A >> B >> C;
    v.push_back(A);
    v.push_back(B);
    v.push_back(C);
    
    int result = 0;
    if (v[0] <= N) {
        result += v[0];
    }
    else {
        result += N;
    }
    
    if (v[1] <= N) {
        result += v[1];
    }
    else {
        result += N;
    }
    
    if (v[2] <= N) {
        result += v[2];
    }
    else {
        result += N;
    }
    
    cout << result;

    return 0;
}