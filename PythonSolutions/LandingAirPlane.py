count =0
def landing(curr,target):
    global count
    if curr == target:
        count+=1
        return
    elif curr > target:
        return
    landing(curr+1,target)
    landing(curr+2,target)

middle_stations =int(input())
target = middle_stations+2
landing(1,target)
print(count)
