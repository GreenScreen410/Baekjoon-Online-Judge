import sys

userList = []

size = int(sys.stdin.readline())

for i in range(size) :
    number, name = sys.stdin.readline().split()
    number = int(number)
    userList.append([number, name])
    
userList.sort(key = lambda x : x[0])

for i in range(len(userList)) :
    print(*userList[i])