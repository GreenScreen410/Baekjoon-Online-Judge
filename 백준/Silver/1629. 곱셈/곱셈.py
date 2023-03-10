def DaC(A, B, C) :
    if B == 1 :
        return A % C
    
    elif B % 2 == 0 :
        return (DaC(A, B//2, C) ** 2) % C
    
    else :
        return ((DaC(A, B//2, C)**2) * A) % C

ABC = list(map(int, input().split()))
print(DaC(ABC[0], ABC[1], ABC[2]))