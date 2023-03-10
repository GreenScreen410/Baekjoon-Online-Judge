import sys

input = sys.stdin.readline

alphabet = ["ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"]
time = 0

word = list(input())

for i in word :
    for j in alphabet :
        if i in j :
            time += alphabet.index(j) + 3
            
print(time)