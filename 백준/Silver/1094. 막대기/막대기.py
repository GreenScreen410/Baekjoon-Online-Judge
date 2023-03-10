X = int(input())
cm = 0

while X != 0 :
    if X % 2 == 1 :
        cm += 1
    X = X // 2
    
print(cm)