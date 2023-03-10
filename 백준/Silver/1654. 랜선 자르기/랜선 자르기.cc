#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int K, N;
    cin >> K >> N;
    
    long long cable[K];
    for(long long i = 0; i < K; i++) {
        cin >> cable[i];
    }

    long long left = 1;
    long long right = *max_element(cable, cable + (sizeof(cable) / sizeof(*cable)));

    while (left <= right) {
        long long mid = (left + right) / 2;
        long long sum = 0;
        for(long long i = 0; i < K; i++) {
            sum += cable[i] / mid;
        }

        if(sum >= N) left = mid + 1;
        else right = mid - 1;
    }

    cout << left - 1;

    return 0;
}