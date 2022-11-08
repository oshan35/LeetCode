from copy import copy


def permutations(nums, res, level):
    for i in range(0, len(nums) - 1):
        num2 = copy(nums)
        swap = num2[i]
        num2[i] = num2[i + 1]
        num2[i + 1] = swap
        print(str(num2) + " " + str(level)+":"+str(i))
        if res.count(num2) == 0:
            res.append(num2)
            permutations(num2, res, level + 1)

    return res


num = [1, 2, 3]
# print(num)
result = [num]
print(len(permutations(num, result, 1)))