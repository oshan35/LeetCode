import time
# perm_list = []

list = []

perm_list = {}
count = 0

def hash_val(s):
    p = 5
    m = 10**len(s)
    hash = 0
    for i in range(len(s)):
        val = ord(s[i])* (p**i)
        hash +=val
    
    return hash%m

def permutations(s,perm_s,length):
    global count
    for i in range(len(s)):
        perm_s = perm_s+s[i]
       
        permutations(s[:i]+s[i+1:],perm_s,length)
        perm_s = perm_s[:-1]

    if len(perm_s) == length and perm_s not in list:
        list.append(perm_s)
        hash = hash_val(perm_s)
        if hash in perm_list.keys():
            count+=1
        else:
            perm_list[hash] = perm_s
    
    return

#s = "university"
#s = "asxz"
#s ="abc"

s = input("Enter : ")

#s = "iEEEXtremes"

start_time = time.time()
permutations(s,"",len(s))
print(count)
print("--- %s seconds ---" % (time.time() - start_time))

#print(perm_list)