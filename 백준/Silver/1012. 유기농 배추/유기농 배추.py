import sys
from collections import deque
input = sys.stdin.readline

def bfs(x, y):
    queue = deque([(x, y)])
    
    while queue:
        x, y = queue.popleft()
        
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            
            if 0 <= nx < N and 0 <= ny < M and graph[nx][ny] == 1:
                queue.append((nx, ny))
                graph[nx][ny] = 2
    return 1

T = int(input())
for _ in range(T):
    dy = [-1, 1, 0, 0]
    dx = [0, 0, -1, 1]
    
    M, N, K = map(int, input().split())
    
    graph = [[0 for _ in range(M)] for _ in range(N)]
    
    for _ in range(K):
        X, Y = map(int, input().split())
        graph[Y][X] = 1
    
    count = 0
    for i in range(N):
        for j in range(M):
            if graph[i][j] == 1:
                count += bfs(i, j)

    print(count)