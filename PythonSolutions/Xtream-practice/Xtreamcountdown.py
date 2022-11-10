

n = int(input())
for i in range(n):
    d = 22 - int(input())
    if d == 1:
        print("The competition starts tomorrow.")
    elif d == 0:
        print("Today is the day!")
    else:
        print("The IEEEXtreme 16.0 competition starts in",d,"days.")