N = int(input())

answer = 0

for _ in range(N) :
    dice1, dice2, dice3 = map(int, input().split())
    
    if dice1 == dice2 == dice3 :
        answer = max(answer, 10000 + dice1 * 1000)
    
    elif dice1 == dice2 :
         answer = max(answer, 1000 + dice1 * 100)
    elif dice1 == dice3 :
         answer = max(answer, 1000 + dice1 * 100)
    elif dice2 == dice3 :
         answer = max(answer, 1000 + dice2 * 100)
         
    else :
        answer = max(answer, 100 * max(dice1, dice2, dice3))
        
print(answer)