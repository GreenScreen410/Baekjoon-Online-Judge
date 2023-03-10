import sys
input = sys.stdin.readline

N = int(input())
count = 0

for i in range(1, N+1) :
    if i < 100 :
        count += 1
    
    elif 1 < 1000 :
        if (i//10%10-i//100 == i%10-i // 10%10) :
            count += 1

print(count)