def SecondGreatLow(arr):
  firstLargest = -9999999999999
  secondLargest = -999999999999

  firstSmallest = 99999999999
  secondSmallest = 9999999999

  

  for item in arr:
    if item > firstLargest:
      secondLargest = firstLargest
      firstLargest = item

    elif item > secondLargest:
      secondLargest = item

    if item < firstSmallest:
      secondSmallest= firstSmallest
      firstSmallest = item
    elif item <secondSmallest:
      secondSmallest = item
  
  output = str(secondSmallest)+" "+str(secondLargest)
  
  return output

input = [4,90]

print(SecondGreatLow(input))