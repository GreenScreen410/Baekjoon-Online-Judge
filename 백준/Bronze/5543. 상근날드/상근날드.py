burgers = []
drinks = []

for i in range(3) :
    burger = int(input())
    burgers.append(burger)
 
for i in range(2) :
    drink = int(input())
    drinks.append(drink)
 
print(min(burgers) + min(drinks)-50)