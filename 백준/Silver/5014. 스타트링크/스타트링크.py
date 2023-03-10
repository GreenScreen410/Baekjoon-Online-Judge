import sys
from collections import deque
input = sys.stdin.readline

F, S, G, U, D = map(int, input().split())

def bfs(S, G):
    queue = deque()
    visited = [0] * (F+1)

    queue.append(S)
    visited[S] = 1

    while queue:
        x = queue.popleft()

        # 스타트링크에 도착하였다면 종료
        if x == G:
            return visited[x] - 1

        if x+U <= F and not visited[x+U]:
            visited[x+U] = visited[x] + 1
            queue.append(x+U)
            
        if x-D > 0 and not visited[x-D]:
            visited[x-D] = visited[x] + 1
            queue.append(x-D)

    return "use the stairs"

print(bfs(S, G))