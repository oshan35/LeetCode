from email.errors import NoBoundaryInMultipartDefect


def removeElement(nums,val):
    k = 0
    pointer = 0
    for i in range(len(nums)):
        if nums[i] != val:
            temp = nums[i]
            nums[i] = nums[pointer]
            nums[pointer] = temp
            pointer+=1
            
        else:
            
            k+=1
    return len(nums)-k



test1 = [3,2,2,3]
test3 = [0,1,2,2,3,0,4,2]

val =3
print(removeElement(test3,2))