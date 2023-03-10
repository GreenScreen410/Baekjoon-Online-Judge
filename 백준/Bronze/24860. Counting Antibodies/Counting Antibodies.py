import sys

input = sys.stdin.readline

V1, J1 = map(int,input().split())
V2, J2 = map(int, input().split())
V, D, J = map(int, input().split())

print((V*J*D) * (V1*J1+V2*J2))