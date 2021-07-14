# cook your dish here

t = int(input())

while t:
    n, origin = input().split(" ")
    n = int(n)
    
    if origin == "INDIAN":
        div = 200
    else:
        div = 400
    
    laddu = 0
    
    for _ in range(n):
        act = input().split(" ")
        
        if act[0] == "CONTEST_WON":
            rank = int(act[1])
            laddu += 300
            
            if rank > 20:
                laddu += 20 - rank
        
        elif act[0] == "TOP_CONTRIBUTOR":
            laddu += 300
            
        elif act[0] == "BUG_FOUND":
            sev = int(act[1])
            laddu += sev
            
        else:
            laddu += 50
    
    month = laddu//div
    print(month)
        
    t -= 1   
            