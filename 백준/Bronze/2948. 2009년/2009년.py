from datetime import datetime, timedelta

D, M = map(int, input().split())
time = datetime(2009, M, D).weekday()

if time == 0:
    print("Monday")
elif time == 1:
    print("Tuesday")
elif time == 2:
    print("Wednesday")
elif time == 3:
    print("Thursday")
elif time == 4:
    print("Friday")
elif time == 5:
    print("Saturday")
elif time == 6:
    print("Sunday")