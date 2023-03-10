import sys

croatiaWords = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]

word = sys.stdin.readline()

for i in croatiaWords :
    word = word.replace(i, '*')

sys.stdout.write(str(len(word) - 1))