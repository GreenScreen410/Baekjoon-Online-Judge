import sys

a, b = sys.stdin.readline().split()
revA = a[::-1]
revB = b[::-1]

revSum = int(revA) + int(revB)
finalRevSum = int(str(revSum)[::-1])

print(finalRevSum)