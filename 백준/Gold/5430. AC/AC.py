from sys import stdin
from collections import deque
input = lambda : stdin.readline().strip()

T = int(input())

for _ in range(T):
    p = input()
    n = int(input())
    array = deque(input()[1:-1].split(","))
    
    p = p.replace("RR", "")
    
    if n == 0:
        array = deque()

    isReverse = False
    isBlank = False
    for i in p:
        if i == "R":
            isReverse = not isReverse
        elif i == "D":
            if not array:
                isBlank = True
                break
            
            if isReverse:
                array.pop()
            else:
                array.popleft()
    
    if isBlank:
        print("error")
    else:
        if isReverse:
            array.reverse()
        
        print("["+",".join(array)+"]")
    