count = 1
def possibleWepons(num,start, max):
    global count

    for i in range(start,len(num)-1):

        new_num = num[i]+num[i+1]
        if int(new_num) % 10 == 0 and int(new_num)>max:
            return 0
        elif new_num == '00':
            return 0
        
        if int(new_num) <= max:
            count+=1   
            result = possibleWepons(num, i+2, max)
            if result == 0:
                count = result
                break

    return count


n = int(input())

for i in range(n):
    max = int(input())
    number = list(str(input()))
    print(possibleWepons(number,0,max))
    count = 1

    
