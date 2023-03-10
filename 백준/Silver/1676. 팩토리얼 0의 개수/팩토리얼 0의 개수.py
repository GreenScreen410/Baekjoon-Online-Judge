from sys import stdin

N = int(stdin.readline())

count = 0

while N >= 5 :
    count = count + N // 5
    
    N = N // 5
    
print(count)