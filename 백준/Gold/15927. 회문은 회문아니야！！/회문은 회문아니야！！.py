isAllSame = True

word = list(input())

for i in range(len(word) // 2) :
    if word[i] != word[len(word) - 1 - i] :
        print(len(word))
        exit(0)
    elif word[i] != word[i + 1] :
        isAllSame = False
        
if isAllSame == False :
    print(len(word)  - 1)
else :
    print("-1")