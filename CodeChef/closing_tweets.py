# Code Chef Problem 
# Problem Code : TWTCLOSE
# Problem Link : https://www.codechef.com/problems/TWTCLOSE

n, k = list(map(int, input().split(" ")))

tweets_status = [0 for i in range(1, n+1)]

while k:
    split = input().split(" ")
    command = None

    if len(split) == 1:
        command = str(split)
    else:
        command, i = split
        command = str(command)
        i = int(i)
    
    if command == 'CLICK':
        if tweets_status[i-1] == 0:
            tweets_status[i-1] = 1
        else:
            tweets_status[i-1] = 0

    else:
        tweets_status = [0 for i in range(1, n+1)]

    print(sum(tweets_status))

    k -= 1



