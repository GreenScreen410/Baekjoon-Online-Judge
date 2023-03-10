from sys import stdin

amount = int(stdin.readline()) # 오직 입력만을 위한 줄
arr = list(map(int, stdin.readline().split())) # 리스트 형식으로 입력 받기

count = 0

for i in arr : # 리스트의 크기만큼 반복
    check = 0
    
    if i > 1 : # 1은 소수가 아니므로 2부터 감지
        for j in range(2, i) :
            if i % j == 0 : 
                check = 1
                break
                
        if check == 0 :
            count = count + 1

print(count)