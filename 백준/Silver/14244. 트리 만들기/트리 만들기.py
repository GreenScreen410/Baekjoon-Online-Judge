n, m = map(int, input().split())

if m == 2 :
  for i in range(n-1) :
    print(i, i+1)
  exit(0)

for i in range(m-1) :
  print(0, i+1)

for i in range(m, n-1) :
  print(i, i+1)

print(0, m)