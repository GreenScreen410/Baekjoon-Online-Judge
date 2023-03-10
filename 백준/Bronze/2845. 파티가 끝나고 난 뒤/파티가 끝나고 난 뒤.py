import sys

input = sys.stdin.readline

a, b = map(int, input().split())
people = list(map(int, input().split()))

for i in people :
    print(str(i - a * b), end = " ")