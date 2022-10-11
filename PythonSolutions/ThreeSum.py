def threeSum(nums):
    three_sum = []

    validation_list = nums
    
    for i in range(len(nums)):
        target = 0 - nums[i]
        prev = []
        foundSum = []

        for j in range(len(nums)):
            k = target - nums[j]

            if k in prev and (nums[i] in validation_list or nums[j] in validation_list or k in validation_list):
                foundSum.append(nums[i])
                foundSum.append(nums[j])
                foundSum.append(k)
                three_sum.append(foundSum)
                validation_list.remove(nums[i])
                validation_list.remove(nums[j])
                validation_list.remove(k)
                break
            prev.append(nums[j])

    return three_sum



inputList = [-1,0,1,2,-1,-4]
print(threeSum(inputList))