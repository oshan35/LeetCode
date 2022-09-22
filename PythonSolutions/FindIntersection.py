def FindIntersection(strArr):
  intersection = []

  str1 = strArr[0].split(",")
  str2 = strArr[1].split(",")

  pointer1 = 0
  pointer2 = 0



  while pointer1 < len(str1) and pointer2 < len(str2):
    
    if str1[pointer1] == str2[pointer2]:
        intersection.append(str1[pointer1].strip())
        pointer1 +=1
        pointer2 +=1
      
    elif int(str1[pointer1]) > int(str2[pointer2]):
      pointer2+=1
    else:
      pointer1+=1
  
  intersectionStr = ",".join(intersection)

  return intersectionStr

test1 = ["1, 3, 4, 7, 13", "1, 2, 4, 13, 15"]

print(FindIntersection(test1))

