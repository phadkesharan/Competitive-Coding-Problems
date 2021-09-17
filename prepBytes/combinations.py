def unique(num):
    num = str(num)
    if '0' in num:
        return False
    temp = []
    for i in num:
        temp.append(i)
    
    return len(set(temp)) == len(temp)


def divisible(num):
    s = str(num)
    for i in s:
        if num%int(i) != 0:
            return False
    return True


l, h = list(map(int , input().split()))

count = 0
for i in range(l, h+1):
    if unique(i) and divisible(i):
        count +=1

print(count)