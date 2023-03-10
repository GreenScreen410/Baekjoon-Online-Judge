import math

def solution(arr):
  from math import gcd
  answer = arr[0]

  for num in arr:
    answer = answer*num // gcd(answer, num)     
  return answer

N = int(input())
A = list(map(int, input().split()))

print(solution(A))