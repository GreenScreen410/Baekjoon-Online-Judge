word = list(input())

for i in range(len(word)) :
    if word[i].isupper() == True :
        word[i] = word[i].lower()
    else :
        word[i] = word[i].upper()
        
for i in range(len(word)) :
    print(word[i], end="")