def possible(numbers) :
  N = len(numbers)
  numbers[0] = min(numbers[0], N-numbers[0]+1)

  for i in range(1, N) :
    changedNumber = N - numbers[i] + 1

    if (numbers[i] < numbers[i-1]) and (changedNumber < numbers[i-1]) :
      return False
    
    if numbers[i] < numbers[i-1] :
      numbers[i] = changedNumber
    elif changedNumber < numbers[i-1] :
      continue
    else :
      numbers[i] = min(numbers[i], changedNumber)

  return True

T = int(input())

for _ in range(T) :
  N  = int(input())
  numbers = list(map(int, input().split()))
  
  if possible(numbers) :
    print("YES")
  else :
    print("NO")