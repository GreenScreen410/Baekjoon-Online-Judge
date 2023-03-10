from sys import stdin
from collections import Counter
input = lambda : stdin.readline().strip()

word = list(map(str, input()))
word.sort()

check = Counter(word)
count = 0
mid = ""

for i in check :
    if check[i] % 2 != 0 :
        count += 1
        mid += i
        word.remove(i)

    if count > 1 :
        break

if not count > 1 :
    res = ""
    for i in range(0, len(word), 2) :
        res += word[i]
    print(res + mid + res[::-1])
else :
    print("I'm Sorry Hansoo")