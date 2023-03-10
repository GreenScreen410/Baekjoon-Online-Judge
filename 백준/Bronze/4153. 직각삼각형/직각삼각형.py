import math

while True :
    numbers = list(map(int, input().split()))
    
    if numbers[0] == 0 and numbers[1] == 0 and numbers[0] == 0 :
        break
    
    largest = max(numbers[0], numbers[1], numbers[2])
    numbers.remove(largest)
    
    if largest ** 2 == numbers[0] ** 2 + numbers[1] ** 2 :
        print("right")
    else :
        print("wrong")