#include <iostream>
#include <queue>
using namespace std;

int N;
int graph[126][126];
int dist[126][126];

void bfs() {
	queue <pair<int, int>> q;

	q.push({0, 0});
	dist[0][0] = graph[0][0];
    
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();

        int dx[4] = {0, 0, -1, 1};
        int dy[4] = {1, -1, 0, 0};
        
		for (int i = 0; i < 4; i++) {
		    int nx = x + dx[i];
			int ny = y + dy[i];

			if (ny >= 0 && ny < N && nx >= 0 && nx < N) {
				if (dist[ny][nx] > dist[y][x] + graph[ny][nx]) {
					dist[ny][nx] = dist[y][x] + graph[ny][nx];
					q.push({ny, nx});
				}
			}
		}
	}
}

int main() {
	for (int n = 1; n <= 125; n++) {
		cin >> N;
		if (N == 0)
			break;

		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++) {
				cin >> graph[i][j];
				dist[i][j] = 2e9;
			}
		
		bfs();
		cout << "Problem " << n << ": " << dist[N-1][N-1] << "\n";
	}

	return 0;
}