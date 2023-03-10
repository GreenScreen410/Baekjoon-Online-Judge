N = int(input())

count = 0

for _ in range(N) :
    survery = int(input())
    
    if survery == 1 :
        count += 1

if count > N // 2 :
    print("Junhee is cute!")
else :
    print("Junhee is not cute!")