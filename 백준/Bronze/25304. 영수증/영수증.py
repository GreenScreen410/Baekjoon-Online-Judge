money = 0

X = int(input())
N = int(input())

for _ in range(N) :
    a, b = map(int, input().split())
    money += a * b
    
if X == money :
    print("Yes")
elif X != money :
    print("No")