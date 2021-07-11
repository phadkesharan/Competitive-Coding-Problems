# /*
# Spoj Problem
# Problem Code : PALIN
# Problem Link : https://www.spoj.com/problems/PALIN/

# */

def isPalin(n):
    return str(n) == str(n)[::-1]

t = int(input())

while t:
    n = int(input())

    i = n+1
    while True:
        if isPalin(i):
            print(i)
            break

        i += 1
    
    t -= 1