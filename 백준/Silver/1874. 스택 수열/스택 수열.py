import sys

size = int(sys.stdin.readline())
stack = []
inputList = []
push_pop = []

# 
for _ in range(size) :
    inputList.append(int(sys.stdin.readline()))

index = 1 # 현재 숫자 상태를 관리하는 변수

for i in range(size):
    if inputList[i] >= index:
        while index <= inputList[i]:
            stack.append(index)
            push_pop.append("+")
            index += 1
        stack.pop()
        push_pop.append("-")
    else:
        if len(stack) != 0 and stack[-1] == inputList[i]:
            stack.pop()
            push_pop.append("-")

if len(stack) != 0:
    print("NO")
else:
    for each in push_pop :
        print(each)