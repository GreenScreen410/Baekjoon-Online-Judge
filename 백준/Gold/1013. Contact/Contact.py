import sys
import re
input = sys.stdin.readline
    
T = int(input())

pattern = re.compile("(100+1+|01)+")
for i in range(T) :
   signal = input().strip()

   if pattern.fullmatch(signal) :
       print("YES")
   else :
       print("NO")