def FirstFactorial(num):
  if num == 1:
    return num
  
  return num * FirstFactorial(num-1)

print(FirstFactorial(4))