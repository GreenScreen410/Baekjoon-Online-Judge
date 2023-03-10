from sys import stdin
input = lambda : stdin.readline().strip()

AB = input()
if AB[1] == "0" :
    print(10 + int(AB[2:]))
else :
    print(int(AB[0]) + int(AB[1:]))    