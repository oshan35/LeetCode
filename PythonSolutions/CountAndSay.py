def convert(num):
    n_count, curr = 0, num[0]

    new_say = ""
    for i in range(len(num)):
        if num == "1":
            return "11"
        
        if num[i] == curr:
            n_count+=1
        else:
            new_say = new_say+str(n_count)+str(curr)
            curr, n_count = num[i], 1
    
    if len(new_say) == 0:
        new_say = str(n_count)+ str(curr)
    else:
        new_say = new_say + str(n_count)+ str(curr)
    return new_say

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
            # if nums == "1":
            #     new_say = "11"
            #     continue
            
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



print(countAndSay(6))
#print(convert("3322251"))