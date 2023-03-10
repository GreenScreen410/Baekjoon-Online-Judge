numbers = []
count = 0

N = int(input())

for _ in range(N) :
  number = int(input())
  numbers.append(number)

for i in range(len(numbers)-1, 0, -1) :
  if numbers[i] <= numbers[i-1] :
    count += numbers[i-1] - numbers[i] + 1
    numbers[i-1] = numbers[i] - 1

print(count)