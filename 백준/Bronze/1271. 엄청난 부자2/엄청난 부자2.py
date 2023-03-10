import sys

input = sys.stdin.readline
print = sys.stdout.write

money, amount = map(int, input().split())
print(str(money // amount) + "\n")
print(str(money % amount))