import sys

input = sys.stdin.readline
print = sys.stdout.write

result = 0
XOR = 0

for _ in range(int(input())) :
    array = list(map(int, input().split()))

    if array[0] == 1 :
        result += array[1]
        XOR = XOR ^ array[1]
        
    elif array[0] == 2 :
        result -= array[1]
        XOR = XOR ^ array[1]
        
    elif array[0] == 3 :
        print(str(result) + "\n")
               
    elif array[0] == 4 :
        print(str(XOR) + "\n")