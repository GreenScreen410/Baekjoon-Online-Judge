#include <iostream>
#include <queue>
using namespace std;
char picture[101][101];
bool visited[101][101][2];
int N, dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};

void BFS(int x, int y, bool weakness, char color) {
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y][weakness] = true;
    
    while (!q.empty()) {
        pair<int, int> now = q.front();
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int nx = now.first + dx[i];
            int ny = now.second + dy[i];
            
            if (nx < 0 || nx >= N || ny < 0 || ny >= N || visited[nx][ny][weakness]) continue;
            
            if (weakness == false) {
                if (picture[nx][ny] == color) {
                    visited[nx][ny][weakness] = true;
                    q.push({nx, ny});
                }
            }
            
            else {
                if (color == picture[nx][ny]) {
                    visited[nx][ny][weakness] = true;
                    q.push({nx, ny});
                }
                else if ((color == 'G' && picture[nx][ny] == 'R') || (color == 'R' && picture[nx][ny] == 'G')) {
                    visited[nx][ny][weakness] = true;
                    q.push({nx, ny});
                }
            }
        }
    }
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> picture[i][j];
        }
    }
    
    int normal = 0, weakness = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            char now = picture[i][j];
            
            if (!visited[i][j][0]) {
                BFS(i, j, false, now);
                normal++;
            }
            
            if (!visited[i][j][1]) {
                BFS(i, j, true, now);
                weakness++;
            }
        }
    }
    
    cout << normal << " " << weakness;
    
    return 0;
}
