e, f, c = map(int, input().split())
s = e + f

amount = 0

while s >= c :
    amount += s // c
    s = s // c + s % c
    
print(amount)