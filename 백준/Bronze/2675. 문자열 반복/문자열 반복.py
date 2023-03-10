import sys

input = sys.stdin.readline

T = int(input())

for i in range(T) :
    N, S = input().split()
    text = ""
    
    for i in S :
        text += int(N) * i
        
    print(text)