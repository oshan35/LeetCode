perm_list = []

def permutations(s,perm_s,length):

    for i in range(len(s)):
        perm_s = perm_s+s[i]
       
        permutations(s[:i]+s[i+1:],perm_s,length)
        perm_s = perm_s[:-1]

    if len(perm_s) == length:
        perm_list.append(perm_s)
    return

s = "abc"
permutations(s,"",len(s))
print(perm_list)