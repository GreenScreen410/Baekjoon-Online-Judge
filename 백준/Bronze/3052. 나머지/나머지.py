import sys

input = sys.stdin.readline
print = sys.stdout.write

inputArray = []

for i in range(10) :
    number = int(input())
    inputArray.append(number % 42)
    
inputArray = set(inputArray)

print(str(len(inputArray)))