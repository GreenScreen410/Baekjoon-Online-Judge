length = 1

N = int(input())
S = input()

for i in range(1, N) :
  if abs(ord(S[i]) - ord(S[i-1])) == 1:
    length += 1
  
  else :
    length = 1

  if length == 5 :
    print("YES")
    exit(0)

print("NO")