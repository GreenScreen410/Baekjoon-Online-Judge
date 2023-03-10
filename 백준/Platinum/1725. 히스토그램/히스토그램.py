import sys
input = sys.stdin.readline

N = int(input())
graph = []
result = 0
left = 0

for _ in range(N) :
    graph.append(int(input()))
graph.append(0)
stack = [(0, graph[0])]

for i in range(1, N+1) :
    left = i
    while stack and stack[-1][1] > graph[i] :
        left, temp = stack.pop()
        result = max(result, temp * (i-left))
    stack.append((left, graph[i]))

print(result)