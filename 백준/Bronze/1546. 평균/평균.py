import sys

scores = []
M = None
scoreSum = 0

size = int(sys.stdin.readline())
scores = list(map(int, sys.stdin.readline().split()))

# scores의 최댓값을 찾는 반복문
for i in scores :
    if (M is None or i > M) :
        M = i
        
# 모든 점수를 '점수/M*100' 으로 변경하는 반복문
for i in range(len(scores)) :
    scores[i] = scores[i] / M * 100
    
for i in scores :
    scoreSum = scoreSum + i
    
print(float(scoreSum / size))