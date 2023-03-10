from sys import stdin

n = int(stdin.readline())
num = []

for i in range(n) :
    x = int(stdin.readline())
    num.append(x)

for i in sorted(num) :
    print(i)