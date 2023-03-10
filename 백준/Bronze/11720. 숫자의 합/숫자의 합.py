import sys

input = sys.stdin.readline
print = sys.stdout.write

notUsingVariable = int(input())
numbers = list(map(int, input().strip()))

print(str(sum(numbers)))