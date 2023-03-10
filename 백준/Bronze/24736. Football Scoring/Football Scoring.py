import sys

input = sys.stdin.readline

T1, F1, S1, P1, C1 = map(int, input().split())
T2, F2, S2, P2, C2 = map(int, input().split())

print((6 * T1) + (3 * F1) + (2 * S1) + P1 + (2 * C1))
print((6 * T2) + (3 * F2) + (2 * S2) + P2 + (2 * C2))