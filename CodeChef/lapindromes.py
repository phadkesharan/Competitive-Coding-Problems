# Codechef Problem
# Problem Code : LAPIN
# Problem Link : https://www.codechef.com/LRNDSA01/problems/LAPIN

# Concepts Used : string indexing, HashMap

t = int(input())

while t:
    s = str(input())
    n = len(s)

    if n%2 == 0:
        s1, s2 = s[int(n/2):], s[:int(n/2)]

    else:
        s1, s2 = s[: int((n-1) /2)], s[int((n+1)/2) :]


    dic1 = {}
    dic2 = {}

    for i in s1:
        if i in dic1:
            dic1[i] += 1
        else:
            dic1[i] = 1
    
    for j in s2:
        if j in dic2:
            dic2[j] += 1
        else:
            dic2[j] = 1

    if dic1 == dic2:
        print("YES")
    else:
        print("NO")
    

    t -= 1
