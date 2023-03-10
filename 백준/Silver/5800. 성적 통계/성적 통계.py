num = int(input())

for i in range(num) :
    a = list(map(int, input().split()))
    del a[0]
    a.sort()
    array = []
    print("Class", i + 1)
    for i in range(len(a)-1) :
        array.append(a[i + 1] - a[i])
        
    print("Max", str(max(a))+",", "Min", str(min(a)) + ",", "Largest gap", max(array))