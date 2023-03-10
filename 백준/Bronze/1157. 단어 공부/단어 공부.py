words = input().upper()
uniqueWords = list(set(words))

countList = []
for x in uniqueWords :
    count = words.count(x)
    countList.append(count)
    
if countList.count(max(countList)) > 1 :
    print("?")
else :
    maxIndex = countList.index(max(countList))
    print(uniqueWords[maxIndex])