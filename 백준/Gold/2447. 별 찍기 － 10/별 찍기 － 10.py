N = int(input())

def solve(N) :
    if N == 3 :
        return ["***", "* *", "***"]

    arr = solve(N // 3)
    
    result = []

    for i in arr :
        result.append(i * 3)
    for i in arr :
        result.append(i + " " * (N // 3) + i)
    for i in arr :
        result.append(i * 3)
        
    return result

print("\n".join(solve(N)))