while True :
    numbers = list(map(int, input()))

    if numbers[0] == 0:
        break

    if numbers == numbers[::-1] :
        print("yes")
    else :
        print("no")