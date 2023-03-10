V = int(input())

A_count = 0
B_count = 0

votes = input()
    
for i in range(V) :
    if "A" == votes[i] :
        A_count += 1
    else :
        B_count += 1
        
if A_count > B_count :
    print("A")
elif A_count < B_count :
    print("B")
else :
    print("Tie")