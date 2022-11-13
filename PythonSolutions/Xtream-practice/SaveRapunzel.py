# def saveRaponzel(gameLevels,start=0, steps = 0):
#   for i in range(len(gameLevels)):
#     max_task = max(gameLevels[i])
#     min_task = min(gameLevels[i])

#     diff_left = start - min_task 
#     diff_right = max_task - start 

#     if diff_right<=0 and diff_left>0:
#         steps = steps+ diff_left
#         start = min_task
#     elif diff_left<=0 and diff_right>0:
#         steps = steps + diff_right
#         start = max_task

#     elif diff_left>0 and diff_right>0:
#         if diff_left == diff_right:
#             path1 = saveRaponzel(gameLevels[i+1:],start=max_task, steps=steps+diff_right)
#             path2 = saveRaponzel(gameLevels[i+1:], start=min_task, steps=steps+diff_left)
#             return(min(path1,path2))
        
#         elif diff_right> diff_left:
#             steps = steps + diff_left*2 + diff_right
#             start = max_task
#         else:
#             steps = steps + diff_right*2 + diff_left
#             start = min_task

#   return steps

def saveRaponzel(levels,levelno=0,start=0, steps = 0):

    if levelno == len(levels):
      return steps
    
    min_task = min(levels[levelno])
    max_task = max(levels[levelno])

    startMin = min_task
    startMax = max_task

    diff_min = abs(start - min_task)
    diff_max = abs(start - max_task)

    steps_min = steps+ diff_min
    steps_max = steps+ diff_max

    levelno+=1
    pathmin = saveRaponzel(levels,levelno,startMin, steps_min)
    pathmax = saveRaponzel(levels,levelno,startMax, steps_max)

    return min(pathmin,pathmax)




n = int(input())
for i in range(n):
  size =[int(i) for i in input().split(" ")]
  gameLevels = []
  for i in range(size[0]):
    points = [int(i) for i in input().split(" ")]
    gameLevels.append(points)
  print(saveRaponzel(gameLevels))

