import datetime
import sys

time = datetime.datetime.now() + datetime.timedelta(hours = 9)

sys.stdout.write(str(time.year) + "\n")
sys.stdout.write(str(time.month) + "\n")
sys.stdout.write(str(time.day))