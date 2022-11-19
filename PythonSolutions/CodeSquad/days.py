
def max_Days(n):
    weeks = n/7
    left = n %7

    w = weeks*5
    l = weeks*2

    if left >5:
        w +=5
        l+=1
    else:
        w+=left
    print(w,l)

n = int(input())
max_Days(n)