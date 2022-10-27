def maxSubArray(nums):
    if len(nums)==1:
        return nums[0]
    top = len(nums)-1
    bottom = 0
    max_sum = 0
    while(top>=bottom):
        round_sum = 0
        for i in range(bottom,top+1):
            round_sum+=nums[i]
        
            if max_sum<round_sum:
                max_sum = round_sum
            
        if nums[top]>nums[bottom]:
            bottom+=1
        else:
            top-=1
        


    return max_sum

nums = [1,2,-1,-2,2,1,-2,1,4,-5,4]
print(maxSubArray(nums))