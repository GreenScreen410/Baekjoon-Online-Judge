M = int(input())
N = int(input())

primes = []
for i in range(M, N+1) :
    n = 0
    if i > 1 :
        for j in range(2, i) :
            if i % j == 0 :
                n += 1
                break
                
        if n == 0 :
            primes.append(i)

if len(primes) < 1 :
    print("-1")
    
else :
    print(sum(primes))
    print(min(primes))