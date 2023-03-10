scores = []

for _ in range(6) :  
    scores.append(int(input())) 

choice1 = sorted(scores[:4]) 
choice2 = scores[4:]

print(sum(choice1[1:]) + max(choice2))