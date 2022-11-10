
def countAndSay(n): 
    prev_say = "1"
    count = 0
    while count < n:
        if count == 0:
            count+=1
            continue
        nums= prev_say

        n_count, curr = 0, nums[0]

        new_say = ""
        for i in range(len(nums)):
            
            if nums[i] == curr:
                n_count+=1
            else:
                new_say = new_say+str(n_count)+str(curr)
                curr, n_count = nums[i], 1
        
        if len(new_say) == 0:
            new_say = str(n_count)+ str(curr)
        else:
            new_say = new_say + str(n_count)+ str(curr)
    
        prev_say = new_say
        count+=1

    return prev_say



print(countAndSay(30))
#print(convert("3322251"))