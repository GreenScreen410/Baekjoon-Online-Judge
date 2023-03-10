import sys

def factorial(n) :
    answer = 1
    
    if n == 0 : 
        return 1
        
    for i in range(1,n+1) :
        answer*=i
        
    return answer
    
answer = 0

print("n e")
print("- -----------")

for i in range(10) :
    answer += 1 / factorial(i)
    if answer > 2.5 :
        print("%d %.9f" % (i, answer))
    elif answer == 1 or answer == 2 :
        print("%d %d" % (i, answer))
    elif answer == 2.5 :
        print("%d %.1f" % (i, answer))