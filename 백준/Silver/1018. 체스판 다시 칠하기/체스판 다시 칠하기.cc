#include <iostream>
#include <vector>
using namespace std;

string white[] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

string black[] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

vector<string> chess;

int checkBlackWhite(int x, int y) {
    int blackFixCount = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (chess[i + x][j + y] != black[i][j]) {
                blackFixCount++;
            }
        }
    }

    int whiteFixCount = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (chess[i + x][j + y] != white[i][j]) {
                whiteFixCount++;
            }
        }
    }
 
    // 두 상황 중 더 작은 값 출력
    return min(blackFixCount, whiteFixCount);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        string line;
        cin >> line;
        chess.push_back(line);
    }
    
    int answer = 1e9;
    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            int paint = checkBlackWhite(i, j);
            
            if (answer == 1e9 || paint < answer) {
                answer = paint;
            }
        }
    }
 
    cout << answer;
    
    return 0;   
}
