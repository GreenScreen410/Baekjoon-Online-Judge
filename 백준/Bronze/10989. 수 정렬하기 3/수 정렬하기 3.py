import sys
input = sys.stdin.readline
print = sys.stdout.write

checkList = [0] * 10001

N = int(input())

for _ in range(N) :
    number = int(input())
    checkList[number] = checkList[number] + 1
    
for i in range(10001) :
    if checkList[i] != 0 :
        for _ in range(checkList[i]) :
            print(str(i) + "\n")