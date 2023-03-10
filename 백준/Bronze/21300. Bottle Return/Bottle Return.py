import sys

input = sys.stdin.readline

value = list(map(int, input().split()))

print(sum(value) * 5)