import time

def hash_val(s):
    p = 5
    m = 10**len(s)
    hash = 0
    for i in range(len(s)):
        val = ord(s[i])* (p**i)
        hash +=val
    
    return hash%m

def permutations(s):
    length,change_Count,index = len(s),0,0

    hash_table = {}
    count = 0
    perms = []
    while change_Count < length:

        item1,item2 = s[index],s[index+1]

        s = s[:index]+item2+item1+s[index+2:]
        perms.append(s)
        hash = hash_val(s)
        
        if hash not in hash_table.values():
            hash_table[s] = hash_val
        else:
            count+=1
        
        index+=1
        if index == length-1:
            index = 0
            change_Count+=1
    print("Length: ",len(perms))
    return count
  

start_time = time.time()
s = "asxzs"
result = permutations(s)
print(result)
print("--- %s seconds ---" % (time.time() - start_time))

