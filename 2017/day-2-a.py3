import sys

data = sys.stdin.read()
line = data.split("\n")

sum = 0

for list in line:
  list = list.split("\t")
  list = [int(x) for x in list]
  
  ma = max(list)
  mi = min(list)
  di = ma - mi
  
  sum += di

print(sum)

