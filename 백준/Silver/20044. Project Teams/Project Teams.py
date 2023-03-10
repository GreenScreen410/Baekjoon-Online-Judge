codingAbilityList = []
codingAbility = 0

n = int(input())
s = list(map(int, input().split()))

s.sort()

for i in range(n) :
    codingAbility = s[i] + s[len(s) - 1 - i]
    codingAbilityList.append(codingAbility)
    
print(min(codingAbilityList))