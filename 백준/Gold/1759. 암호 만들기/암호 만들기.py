from itertools import combinations

aeiou = ["a", "e", "i", "o", "u"]

L, C = map(int, input().split())
latters = sorted(list(map(str, input().split())))

comb = combinations(latters, L)

for word in comb :
    count = 0
    for letter in word :
        if letter in aeiou :
            count += 1

    if 1 <= count <= L-2 :
        print("".join(word))