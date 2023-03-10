import sys
input = sys.stdin.readline
print = sys.stdout.write

N = int(input())

temp = []

for i in range(N) :
    temp.append(input().split())
    temp = sorted(temp, key = lambda  x:x[1])
    
print(temp[0][0])