import sys

input = sys.stdin.readline
print = sys.stdout.write

A = int(input())
B = int(input())
C = int(input())

result = list(str(A * B * C))

for i in range(10) :
    print(str(result.count(str(i))) + "\n")