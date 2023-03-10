from datetime import datetime, timedelta

x, y = map(int, input().split())
time = datetime(2007, x, y).weekday()

if time == 0:
    print("MON")
elif time == 1:
    print("TUE")
elif time == 2:
    print("WED")
elif time == 3:
    print("THU")
elif time == 4:
    print("FRI")
elif time == 5:
    print("SAT")
elif time == 6:
    print("SUN")