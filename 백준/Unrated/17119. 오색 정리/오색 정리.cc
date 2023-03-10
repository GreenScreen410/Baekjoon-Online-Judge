#include <iostream>
#include <random>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(1, 5);
    
    for (int i = 0; i < N; i++) {
        cout << dis(gen);
    }
}