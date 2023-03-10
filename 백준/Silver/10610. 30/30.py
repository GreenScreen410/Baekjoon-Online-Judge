import sys
input = sys.stdin.readline

N = input().rstrip()

if "0" in N and sum(map(int, N)) % 3 == 0 :
    print("".join(reversed(sorted(N))))

else :
    print(-1)