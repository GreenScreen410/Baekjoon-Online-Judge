#include <iostream> 
#include <vector> 
#include <queue>
using namespace std;

int answer[100001];
int visit[100001];
vector<int> graph[100001];

void bfs() {
    queue<int> q;
    visit[1] = true;
    q.push(1);
    
    while (!q.empty()) {
        int parent = q.front();
        q.pop();
        
        for (int i = 0; i < graph[parent].size(); i++){
            int child = graph[parent][i];
            
            if (!visit[child]) {
                answer[child] = parent;
                visit[child] = true;
                q.push(child);
            }
        }
    }
}

int main() {
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) { 
        int x, y; 
        cin >> x >> y;
        
        graph[x].push_back(y); 
        graph[y].push_back(x); 
    } 
    
    bfs(); 
    
    for (int i = 2; i <= N; i++) { 
        cout << answer[i] << "\n";
    }
}
