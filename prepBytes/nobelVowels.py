vowels = ['a', 'e', 'i', 'o', 'u']

def isNobel(s):

    if len(s) == 1:
        if s[0] in vowels or s[0] == 'n':
            return True
    
    if s[len(s)-1] not in vowels and s[len(s)-1] != 'n':
        return False

    for i in range(len(s)-1):
        if s[i] not in vowels and s[i] != 'n': 
            if s[i+1] not in vowels:
                return False

    return True


t = int(input())

while t:

    s = str(input())

    ans = isNobel(s)

    if ans:
        print("YES")
    else:
        print("NO")

    t -= 1