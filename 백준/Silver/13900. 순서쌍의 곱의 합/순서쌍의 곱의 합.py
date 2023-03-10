import sys
input = sys.stdin.readline

input() # 사실 아무 의미없는 입력

numbers = list(map(int, input().split(" ")))
s = sum(numbers)
answer = 0

for i in numbers :
    s = s - i
    answer = answer + i * s

print(answer)