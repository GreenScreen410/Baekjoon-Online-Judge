import sys
input = sys.stdin.readline

N, K = map(int, input().split())
lists = [0 for _ in range(K + 1)]

for _ in range(N) :
    W, V = map(int, input().split())
    for j in range(K, W-1, -1) :
        lists[j] = max(lists[j], lists[j-W] + V)
        
print(lists[-1])