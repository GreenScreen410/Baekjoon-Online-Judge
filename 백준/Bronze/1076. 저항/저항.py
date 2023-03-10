colors = ["black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"]

color1 = colors.index(input())
color2 = colors.index(input())
color3 = colors.index(input())

print(int(str(color1) + str(color2)) * (10 ** color3))