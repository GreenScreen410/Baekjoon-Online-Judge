from sys import stdin

a, b, v = map(int, stdin.readline().split())
k = (v-b) / (a-b)

print(int(k) if k == int(k) else int(k) + 1)