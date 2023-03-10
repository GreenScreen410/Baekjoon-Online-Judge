import sys

count = 1

size = int(sys.stdin.readline())
EWEWEWEWEWEW = sys.stdin.readline()

for i in range(1, size) :
    if EWEWEWEWEWEW[i] == "E":
        if EWEWEWEWEWEW[i-1] == "W" :
            count = count + 1
            
print(count)