import sys
input = sys.stdin.readline

N, K = map(int, input().split())

bottle = 0

while bin(N).count("1") > K :
    N += 1
    bottle += 1

print(bottle)