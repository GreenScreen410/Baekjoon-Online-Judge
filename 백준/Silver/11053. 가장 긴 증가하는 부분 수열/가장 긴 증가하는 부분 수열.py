size = int(input())
A = list(map(int, input().split()))

dp = [1] * size

for i in range(size) :
    for j in range(i) :
        if A[i] > A[j] :
            dp[i] = max(dp[i], dp[j] + 1)

print(max(dp))