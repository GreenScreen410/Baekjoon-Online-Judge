N = int(input())
a = list(map(int, input().split()))

ascendingCount = 0
ascendingResult = 0
desendingCount = 0
desendingResult = 0

for i in range(1, N) :
    if a[i - 1] > a[i] :
        desendingCount += 1
        desendingResult = i
    if a[i - 1] < a[i] :
        ascendingCount += 1
        ascendingResult = i
        
if (ascendingCount > 1 or (ascendingCount == 1 and not(a[N - 1] >= a[0]))) :
    ascendingResult = -1
if (desendingCount > 1 or (desendingCount == 1 and not(a[N - 1] <= a[0]))) :
    desendingResult = -1

if ascendingResult != -1 and desendingResult != -1 :
    print(min(ascendingResult, desendingResult))
elif ascendingResult != -1 :
    print(ascendingResult)
elif desendingResult != -1 :
    print(desendingResult)
else :
    print("-1")