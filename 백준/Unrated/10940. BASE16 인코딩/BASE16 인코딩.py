import base64

S = input()
S = bytes(S, "UTF-8")
print(str(base64.b16encode(S)).replace("b", "").replace("'", ""))