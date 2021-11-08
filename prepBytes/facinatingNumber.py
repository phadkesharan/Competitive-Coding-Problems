def getDigits(m):
    digits = []
    while m:
        digits.append(m%10)
        m //= 10

    return digits

t = int(input())

while t:
  
  n = int(input())
  i = n+1
  
  while(True):
    digits = getDigits(i)
    
    if len(set(digits)) == 4:
      print(i)
      break
  
    i += 1
  
  t -= 1