import sys

input = sys.stdin.readline
factorial = 1
plus = 1

N = int(input())

for i in range(N) :
    factorial *= plus
    plus += 1

print(factorial)