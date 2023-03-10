import math

L = int(input())
A = int(input())
B = int(input())
C = int(input())
D = int(input())

k = math.ceil(A / C)
m = math.ceil(B / D)

freeTime = max(k, m)
print(L - freeTime)