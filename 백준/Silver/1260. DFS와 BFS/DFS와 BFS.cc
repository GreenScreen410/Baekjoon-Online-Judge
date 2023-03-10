#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
	int N, M, V;
    int graph[1005][1005];
    int visited[1005];
    
	cin >> N >> M >> V;
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		graph[a][b] = graph[b][a] = 1;
	}

	//DFS
	stack<int> dfs;
	dfs.push(V);
	while (!dfs.empty()) {
		int t = dfs.top();
		dfs.pop();
		if (visited[t]) {
			continue;
        }
        
		cout << t << " ";
		
		visited[t] = 1;
		for (int i = N; i >= 1; i--) {
			if (visited[i]) {
                continue;
            }
			if (graph[t][i]) {
				dfs.push(i);
			}
		}
	}

	for (int i = 1; i <= N; i++) {
        visited[i] = 0;
    }
	cout << "\n";
    
	//BFS
	queue<int> bfs;
	bfs.push(V);
	while (!bfs.empty()) {
		int t = bfs.front();
		bfs.pop();
		if (visited[t]) {
			continue;
        }
        
		cout << t << " ";
		
		visited[t] = 1;
		for (int i = 1; i <= N; i++) {
			if (visited[i]) {
				continue;
            }
			if (graph[t][i]) {
                bfs.push(i);
            }
		}
	}
}