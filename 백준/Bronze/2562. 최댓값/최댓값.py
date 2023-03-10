import sys

input = sys.stdin.readline
print = sys.stdout.write

inputArray = []

for i in range(9) :
    inputArray.append(int(input()))
    
print(str(max(inputArray)) + "\n" + str(inputArray.index(max(inputArray)) + 1))