from sys import stdin

amount = int(stdin.readline())

for i in range(amount) :
    quiz = list(stdin.readline()) # OX 리스트 amount번 입력받기
    
    sum = 0 # 합을 저장하는 변수
    c = 1 # 연속으로 맞았는지 확인하는 변수 (콤보)
    
    for i in quiz : # quiz 리스트의 크기만큼 반복
        if i == "O" : # O가 발견되면
            sum = sum + c # 콤보와 더해서 저장
            c = c + 1 # 콤보 1 증가
            
        else : # O가 아닌 다른 값이 발견되면
            c = 1 # 콤보를 1로 초기화
            
    print(sum)