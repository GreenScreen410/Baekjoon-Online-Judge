T = int(input())

for _ in range(T) :
    expression = input().split()
    answer = 0

    answer += float(expression[0])

    for i in range(len(expression)) :
        if expression[i] == "#" :
            answer -= 7
        
        elif expression[i] == "%" :
            answer += 5
        
        elif expression[i]== "@" :
            answer *= 3
    
    print("%0.2f" % answer)
        