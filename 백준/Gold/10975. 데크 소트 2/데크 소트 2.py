a = []
deq = []
previewList = [-1 for _ in range(2020)]
nextList = [-1 for _ in range(2020)]
result = 1

def pushLeft(x) :
  for j in range(len(deq)) :
    if nextList[x] == deq[j][0] :
      deq[j][0] = x
      return 1
  return 0

def pushRight(x) :
  for j in range(len(deq)) :
    if previewList[x] == deq[j][1] :
      deq[j][1] = x
      return 1
  return 0

N = int(input())

for _ in range(N) :
  number = int(input())
  number += 1001
  a.append(number)

sorted_a = sorted(a)

for i in range(1, N) :
  myPreview = sorted_a[i-1]
  previewList[sorted_a[i]] = myPreview

for i in range(N-1) :
  myNext = sorted_a[i+1]
  nextList[sorted_a[i]] = myNext

deq.append([a[0], a[0]])

for i in range(1, N) :
  if pushLeft(a[i]) == 1 :
    continue
  elif pushRight(a[i]) == 1:
    continue
  else :
    deq.append([a[i], a[i]])
    result += 1

print(result)