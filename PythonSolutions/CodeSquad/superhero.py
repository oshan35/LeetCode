def count(list):
    dict = {}

    for i in range(len(list)):
        if list[i] == 0:
            continue

        if list[i] not in dict.keys():
            dict[list[i]] = 1
        else:
            dict[list[i]]+=1

    return dict
        

def max_size(list):
    max_size = -1
    left_pt = 1
    right_pt = len(list)-1

    while left_pt<right_pt:
        if list[left_pt] == 0:
            left_pt+=1
            continue
        elif list[right_pt] == 0:
            right_pt-=1
            continue

        counts = count(list[left_pt:right_pt+1])
        prev = None
        flag = True
        for c in counts.keys():
            if prev == None:
                prev= counts[c]
                continue
            if prev > counts[c]:
                prev = counts[c]
                flag = False

                        
        cat_left, cat_right = list[left_pt], list[right_pt]

        if flag and len(counts.keys())>=2:
            size = right_pt - left_pt
            if size>max_size:
                max_size = size
            left_pt+=1


        if counts[cat_right] > prev:
            right_pt-=1
        elif counts[cat_left] > prev:
            left_pt+=1
        else:
            left_pt+=1
    print(max_size)
        




# nums = [int(x) for x in input().split()]
# n,k = nums[0],nums[1]
# # n,k =9,2

# maxi = 0
# dict ={}
# for i in range(n):
#     ith = [int(x) for x in input().split()]
#     dict[ith[0]] = ith[1]
#     if ith[0]>maxi:
#         maxi = ith[0]
# dict = {1:1,5:1,6:1,9:1,100:1,2:2,7:2,3:3,8:3}
dict = {0:1,1:2,2:2,3:3,4:3,5:3,6:3,7:2,8:2,9:1}
maxi = max(dict.keys())

list = [0]*(maxi+1)
for key, val in dict.items():
    list[key] = val

max_size(list)