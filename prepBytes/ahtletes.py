n, m = list(map(int, input().split()))

sets = {}
count = 0

for i in range(m):
  a, b = list(map(int, input().split()))
  
  if len(sets) == 0:
    sets[count] = [a, b]
  else:

    flag = False
    for k, v in sets.items():
      if a in v or b in v:
        sets[k].append(a)
        sets[k].append(b)
        flag = True
        break
      
    if flag == False:
      count += 1
      sets[count] = [a, b]

    
  
pairs = 1
print("sets : ", sets)
if len(sets) <1:
    pairs = 0
else:
    for k, v in sets.items():
        pairs *= len(set(v))

print(pairs)
