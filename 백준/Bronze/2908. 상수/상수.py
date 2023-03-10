import sys

input = sys.stdin.readline

A, B = map(int, input().split())

A = list(str(A))
A.reverse()

B = list(str(B))
B.reverse()

A = A[0] + A[1] + A[2]
B = B[0] + B[1] + B[2]

if A > B :
    print(A)
    
else :
    print(B)