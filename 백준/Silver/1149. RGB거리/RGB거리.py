houses = []

N = int(input())

for i in range(N) :
    houses.append(list(map(int, input().split())))
    
for i in range(1, len(houses)) :
    houses[i][0] = min(houses[i-1][1], houses[i-1][2]) + houses[i][0]
    houses[i][1] = min(houses[i-1][0], houses[i-1][2]) + houses[i][1]
    houses[i][2] = min(houses[i-1][0], houses[i-1][1]) + houses[i][2]
    
print(min(houses[N-1][0], houses[N-1][1], houses[N-1][2]))