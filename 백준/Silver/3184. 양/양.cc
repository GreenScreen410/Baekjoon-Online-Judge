#include <iostream>
#include <queue>
using namespace std;

int R, C, wolf_sum, sheep_sum;
char map[250][250];
bool visited[250][250];
int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};

void BFS(int a, int b) {
    int wolf = 0, sheep = 0;
    
    queue<pair<int, int>> q;
    q.push({a, b});
    
    visited[a][b] = true;
    
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        if (map[x][y] == 'v') wolf++;
        if (map[x][y] == 'o') sheep++;
        
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx >= 0 && ny >= 0 && nx < R && ny < C) {
                if (visited[nx][ny] == false && map[nx][ny] != '#') {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
    }
    
    if (sheep > wolf) sheep_sum += sheep;
    else wolf_sum += wolf;
}

int main(void) {
    cin >> R >> C;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> map[i][j];
        }
    }
    
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (visited[i][j] == false) {
                BFS(i, j);
            }
        }
    }
    
    cout << sheep_sum << " " << wolf_sum;
    
    return 0;
}
