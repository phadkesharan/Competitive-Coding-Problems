t = int(input())

vowels = ['a', 'e', 'i', 'o', 'u']

while t:
  
  s = str(input())
  s = s.lower()
  flag = True
  
  if len(s) == 1:
    print("YES")
    continue
  
  for i in range(len(s)-1):
    if s[i] not in vowels and s[i].isalpha():
      if s[i+1] not in vowels:
        flag =False
        break
      
  if flag:
    print("YES")
  else:
    print("NO")
    
  t -= 1
      
      
  
      