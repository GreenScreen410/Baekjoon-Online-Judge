from sys import stdin

N, X = map(int, stdin.readline().split())

A = list(map(int, stdin.readline().split()))

for i in range(N):
    if A[i] < X :
        print(A[i], end=" ")