#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> N >> M;
    
    vector<long long> tree(N);
    for(long long& i:tree) {
        cin >> i;
    }

    long long left = 0;
    long long right = *max_element(tree.begin(), tree.end());

    while (left <= right) {
        long long mid = (left + right) / 2;
        long long sum = 0;
        for(long long i:tree) {
            sum += max(0LL, i - mid);
        }

        if(sum >= M) left = mid + 1;
        else right = mid - 1;
    }

    cout << left - 1;

    return 0;
}