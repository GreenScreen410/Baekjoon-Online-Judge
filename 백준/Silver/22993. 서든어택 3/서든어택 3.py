import sys

input = sys.stdin.readline
print = sys.stdout.write

N = input()
array = list(map(int, input().split()))

junwon = array[0]

array = sorted(array[1:])

survived = True

for i in array :
    if junwon > i :
        junwon += i
        
    else :
        survived = False
        break
    
print('Yes' if survived else 'No')