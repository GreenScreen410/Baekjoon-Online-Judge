special = 0

N = int(input())

special = N // 2

for i in range(1, special+1) :
  print(i+special, i, end=" ")

if N % 2 == 1 :
  print(N)