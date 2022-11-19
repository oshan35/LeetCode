
for i in range(n):
    ith = [int(x) for x in input().split(" ")]
    list[ith[0]] = ith[1]

print(maxPhoto(list,k))