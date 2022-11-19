


#[1, 2, 3, 1, 1, 2, 3, 1, 1]
def maxPic(list):
    max_size =0
    cat_count ={}

    for i in range(len(list)):
        if list[i]-1 == -1:
            continue
        if list[i]-1 not in cat_count.keys():
            cat_count[list[i]-1] = 1
        else:
            cat_count[list[i]-1] = cat_count[list[i]-1]+1
        
 
    p_left = 0
    p_right =len(list)-1
    min_cat = cat_count[min(cat_count.values())]

    while p_left<p_right:
        num_left = list[p_left]
        num_right = list[p_right]

        if num_left != min_cat:
            

def maxPhoto(list,k):
    max_size = 0
    count_from_each_cat = {} #{1:1, 2: 1, 3: 1}

    for i in range(len(list)):
        if list[i]-1 == -1:
            continue

        if list[i]-1 not in count_from_each_cat.keys():
            count_from_each_cat[list[i]-1] = 1
        else:
            count_from_each_cat[list[i]-1] = count_from_each_cat[list[i]-1]+1
        
        flag = True
        prev = None
        for key in count_from_each_cat.keys():
            if prev == None:
                prev = count_from_each_cat[key]
                continue
            if prev != count_from_each_cat[key]:
                flag = False
                break
            
        
        if not flag:
            count_from_each_cat = {}
            count_from_each_cat[list[i]-1] = 1
        else:
            new_max = max(count_from_each_cat.keys())- min(count_from_each_cat.keys())
            if new_max>max_size:
                max_size = new_max
    return max_size

        


# nums = [int(x) for x in input().split(" ")]
# n,k = nums[0],nums[1]
n,k =9,2

# maxi = 0
# dict ={}
# for i in range(n):
#     ith = [int(x) for x in input().split(" ")]
#     dict[ith[0]] = ith[1]
#     if ith[0]>maxi:
#         maxi = ith[0]
dict = {1:1,5:1,6:1,9:1,100:1,2:2,7:2,3:3,8:3}
maxi = max(dict.keys())

list = [0]*(maxi+1)
for key, val in dict.items():
    list[key-1] = val

print(maxPhoto(list,k))