import sys
from collections import deque
input = sys.stdin.readline

N = int(input())

graph = []
for _ in range(N):
    graph.append(list(map(int, input().strip())))

def bfs(a, b):
    dx = [0, 0, 1, -1]
    dy = [1, -1, 0, 0]
    
    queue = deque()
    queue.append([a, b])
    graph[a][b] = 0
    count = 1
    
    while queue:
        x, y = queue.popleft()
        graph[x][y] = 0
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            if nx < 0 or nx >= N or ny < 0 or ny >= N:
                continue

            if graph[nx][ny] == 1:
                queue.append([nx, ny])
                graph[nx][ny] = 0
                count += 1
    return count

result = []
for i in range(N):
    for j in range(N):
        if graph[i][j] == 1:
            count = bfs(i, j)
            result.append(count)

result.sort()

print(len(result))
for i in result:
    print(i)