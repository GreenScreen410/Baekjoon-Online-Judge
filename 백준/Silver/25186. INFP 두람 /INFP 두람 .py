N = int(input())
d = list(map(int, input().split()))

if N == 1 and d[0] == 1 :
  print("Happy")
  exit(0)
elif N == 1 and d[0] != 1 :
  print("Unhappy")
  exit(0)

s = sum(d)
largest = max(d)
s -= largest

if largest <= s :
  print("Happy")
else :
  print("Unhappy")