numbers = []
count = 0

N, K = map(int, input().split())

for i in range(1, N + 1):
    
    if N % i == 0 :
        numbers.append(i)
    count += 1

if K > len(numbers) :
    print(0)
else :
    print(numbers[K - 1])