perm_list = set()

def permutation(s1, perm_s, length):
    for i in range(len(s1)):
        perm_s = perm_s + s1[i]

        permutation(s1[:i]+s1[i+1:], perm_s, length)
        perm_s = perm_s[:-1]
    
    if len(perm_s) == length:
        perm_list.add(perm_s)

    return perm_list

def permutation(nums):

    for i in range(0, len(nums) - 1):

        num2 = list(nums)
        swap = num2[i]
        num2[i] = num2[i + 1]
        num2[i + 1] = swap

        if num2 not in perm_list:
            perm_list.add(num2)
            permutation(num2)
    return perm_list


def checkInclusion(s1, s2):
    perms = permutation(s1)
    length = len(s1)
    for i in range(len(s2)):
        if i+length <= len(s2):
            forward = s2[i:i+length]
            if forward in perms:
                return True
        
        if i-length >= 0:
            backward = s2[i-length:i]
            if backward in perms:
                return True
    return False


s1 = "ab"
s2 = "eidboaoo"

print(checkInclusion(s1,s2))