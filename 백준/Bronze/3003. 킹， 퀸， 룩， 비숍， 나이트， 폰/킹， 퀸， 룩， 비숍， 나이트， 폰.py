import sys

input = sys.stdin.readline

chess = [1, 1, 2, 2, 2, 8]

foundChess = list(map(int, input().split()))

for i in range(6) :
    print(chess[i] - foundChess[i])