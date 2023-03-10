#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> t_list;
    for(int i=0;i<N;i++) {
        int t;
        cin >> t;
        t_list.push_back(t);
    }

    sort(t_list.rbegin(), t_list.rend());

    int days = 0;
    for(int i = 0; i < N; i++) {
        days = max(days, t_list[i] + i + 1);
    }
    
    cout << days + 1;
}