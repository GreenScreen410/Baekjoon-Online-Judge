import sys

N = int(sys.stdin.readline())
A = list(map(int, sys.stdin.readline().split()))

i = 1 

for j in range(len(A)) :
    if j > 0 :
        if A[j] > A[j - 1] :
            i = A[j]
            
        if j == N - 1 :
            print("YES")
            break
        
        if i > A[j] :
            if A[j] <= A[j + 1] :
                print("NO")
                break
            
            if j == N - 1:
                print("YES")
        
        if A[j] == A[j - 1] :
            print("NO")
            break