import sys

aeiou = ["aeiou"]

while True :
    sentence = input()
    sentence = sentence.lower()
    
    if sentence == "#" :
        sys.exit()

    count = 0

    for i in sentence :
        if i in "aeiou" :
            count += 1
            
    print(count)