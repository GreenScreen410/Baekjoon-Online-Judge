T = int(input())

for _ in range(T) :
  yunyeon = False

  year, month = map(int, input().split())

  if (year % 100 != 0 and year % 4 == 0) or year % 400 == 0 :
    yunyeon = True

  if yunyeon == False :
    if month == 1 :
      print(f"{year - 1} 12 31")
      continue
    
    if month == 3 :
      print(f"{year} 2 28")
      continue

    if month == 2 or  month == 4 or  month == 6 or  month == 8 or  month == 9 or  month == 11 :
      print(f"{year} {month - 1} 31")

    else :
      print(f"{year} {month - 1} 30")

  else :
    if month == 1 :
      print(f"{year - 1} 12 31")
      continue
    
    if month == 3 :
      print(f"{year} 2 29")
      continue

    if month == 2 or  month == 4 or  month == 6 or  month == 8 or  month == 9 or  month == 11 :
      print(f"{year} {month - 1} 31")

    else :
      print(f"{year} {month - 1} 30")