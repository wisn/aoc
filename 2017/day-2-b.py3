import sys

data = sys.stdin.read()
line = data.split("\n")

sum = 0
max = -1
min = 9999

for list in line:
  list = list.split("\t")
  list = [int(x) for x in list]
  
  list.sort()
  list = list[::-1]
  
  for i in range(len(list) - 1):
    for j in range(i + 1, len(list)):
      if list[i] % list[j] == 0:
        x = int(list[i] / list[j])
        
        if x > max: max = x
  
  sum += max
  max  = -1

print(sum)

