#include <iostream>
#include <queue>
using namespace std;

int R, C, answer;
char map[20][20];
bool visited[26];

void DFS(int x, int y, int count) {
    answer = max(answer, count);
    
    int dx[] = { 0, 0, 1, -1 };
    int dy[] = { 1, -1, 0, 0 };
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < R && ny < C && nx >= 0 && ny >= 0) {
            if (visited[map[nx][ny] - 'A'] == false) {
                visited[map[nx][ny] - 'A'] = true;
                DFS(nx, ny, count + 1);
                visited[map[nx][ny] - 'A'] = false;
            }
        }
    }
}

int main() {
    cin >> R >> C;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> map[i][j];
        }
    }
    
    visited[map[0][0] - 'A'] = true;
    DFS(0, 0, 1);
 
    cout << answer;

    return 0;
}
