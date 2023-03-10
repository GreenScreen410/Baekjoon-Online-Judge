import sys
import math

input = sys.stdin.readline
print = sys.stdout.write
order = 0

N, M = map(int, input().split())

array = [1 for i in range(N, M + 1)]
square = [v ** 2 for v in range(2, int(math.sqrt(M)) + 1)]

for i in square :
    index = (math.ceil(N / i) * i) - N

    while (index <= M - N) :
        array[index] = 0
        index = index + i

for i in range(len(array)) :
    if array[i] == 1 :
        order = order + 1
        

print(str(order))