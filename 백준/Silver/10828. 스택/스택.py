import sys

stack = []

size = int(sys.stdin.readline())

for _ in range(size) :
    stackCommand = sys.stdin.readline().split()

    if stackCommand[0] == "push" :
        stack.append(stackCommand[1])
        
    elif stackCommand[0] == "pop" :
        if len(stack) == 0 :
            print(-1)
        else:
            print(stack.pop())
            
    elif stackCommand[0] == "size" :
        print(len(stack))
        
    elif stackCommand[0] == "empty" :
        if len(stack)==0:
            print(1)
        else:
            print(0)
            
    elif stackCommand[0] == "top" :
        if len(stack) == 0:
            print(-1)
        else:
            print(stack[-1])