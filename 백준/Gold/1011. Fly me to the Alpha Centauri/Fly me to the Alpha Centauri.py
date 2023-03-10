import sys

input = sys.stdin.readline
print = sys.stdout.write

T = int(input())

for i in range(T) :
    x, y = map(int, input().split())
    distance = y - x
    
    count = 0
    move = 1
    moveSum = 0
    
    while moveSum < distance :
        count += 1
        moveSum += move
        
        if count % 2 == 0 :
            move += 1  
            
    print(str(count) + "\n")