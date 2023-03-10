import sys

input = sys.stdin.readline
print = sys.stdout.write

text = list(input().strip())

text.reverse()

for i in range(len(text)) :
    print(text[i])