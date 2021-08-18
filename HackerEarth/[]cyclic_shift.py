# hackerEarth Problem
# Problem Link : https://www.hackerearth.com/practice/codemonk/
# Concepts used : 

t = int(input())

while t:
    n, k = list(map(int, input().split()))
    s = str(input())

    max_num = 0
    for i in range(n):
        s = s[1:] + s[0]
        num = eval("0b" + s)

        if num > max_num:
            max_num = num
    
    counts = 0

    if k < n:
        while k:
            s = s[1:] + s[0]
            num = eval("0b" + s)


            if num == max_num:
                k -= 1
            counts += 1
        
        print(counts)

    else:
        equal_nums = 0
        for i in range(n):
            pass


    t -= 1








