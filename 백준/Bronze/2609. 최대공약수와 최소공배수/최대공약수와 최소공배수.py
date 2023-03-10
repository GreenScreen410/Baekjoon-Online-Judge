from sys import stdin

a, b = map(int, stdin.readline().split())

def gcd(a, b) :
    while b > 0:
        a, b = b, a % b
    return a

def lcm(a, b) :
    return a * b // gcd(a, b)

print(gcd(a, b))
print(lcm(a, b))