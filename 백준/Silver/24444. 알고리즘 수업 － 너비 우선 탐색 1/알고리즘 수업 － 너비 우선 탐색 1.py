import sys
from collections import deque
input = sys.stdin.readline

N, M, R = map(int, input().split())
graph = [[] for _ in range(N + 1)]
visited = [0] * (N + 1)
count = 1

for _ in range(M) :
    u, v = map(int, input().split())
    
    graph[u].append(v)
    graph[v].append(u)


bfs = deque([R])
visited[R] = 1
while bfs :
    t = bfs.popleft()
    graph[t].sort()
    for g in graph[t] :
        if visited[g] == 0 :
            count += 1
            visited[g] = count
            bfs.append(g)

for i in visited[1:] :
    print(i)