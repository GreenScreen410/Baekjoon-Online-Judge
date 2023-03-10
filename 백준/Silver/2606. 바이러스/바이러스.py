computer = int(input())
V = int(input())

graph = [[] for _ in range(computer+1)]
for _ in range(V):
    a, b = map(int, input().split())
    graph[a] += [b]
    graph[b] += [a]
    
visited = [0]*(computer+1)
def dfs(a):
    visited[a] = 1
    for i in graph[a]:
        if visited[i] == 0:
            dfs(i)
            
dfs(1)
print(sum(visited) - 1)