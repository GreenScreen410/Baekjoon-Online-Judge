#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;
    
    int temp;
    priority_queue<int> pq;
    while (N--) {
        cin >> temp;
        
        if (temp == 0) {
            if (pq.empty())
                cout << "0\n";
            else {
                cout << -pq.top() << "\n";
                pq.pop();
            }
        }
        else {
            pq.push(-temp);
        }
    }
}