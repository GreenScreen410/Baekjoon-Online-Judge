from sys import stdin

t = int(stdin.readline())

for i in range(t) :
    h, w, n = map(int, stdin.readline().split())
    num = n // h + 1
    floor = n % h
    if n % h == 0 :
        num = n // h
        floor = h
    print(f'{floor * 100 + num}')