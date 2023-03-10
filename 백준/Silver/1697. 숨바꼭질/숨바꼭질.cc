#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio;
    cin.tie(0);
    cout.tie(0);
    
    int N, K;
    cin >> N >> K;
    
    int visited[100001] = { 0 };
    visited[N] = 1;
    
    queue<pair<int, int>> q;
    q.push({ N, 0 });
    
    while (!q.empty()) {
        int x = q.front().first;
        int count = q.front().second;
        q.pop();
        
        if(x == K) {
            cout << count;
            break;
        }
        
        if (x+1 >= 0 && x+1 < 100001){
            if (!visited[x+1]) {
                visited[x+1] = 1;
                q.push({ x+1, count+1 });
            }
        }
        if (x-1 >= 0 && x-1 < 100001) {
            if (!visited[x-1]) {
                visited[x-1] = 1;
                q.push({ x-1, count+1 });
            }
        }
        if(2*x >= 0 && 2*x < 100001) {
            if(!visited[2*x]) {
                visited[2*x] = 1;
                q.push({ 2*x, count+1 });
            }
        }
    }
    
    return 0;
}
