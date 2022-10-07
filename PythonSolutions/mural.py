def solution(beautyScores):
# create a path length array
   # when we start from a one index we can move to two directions 
   # so we put two pointers each loop they move forward and update the path length score
   # when both pointers meet end of the wall we select a max beauty score 
   # repeat this process for each index
   # it will take something like nlog(n)
  
   maxScore = 0
   for i in range(len(beautyScores)):
     startingScore = beautyScores[i]
     pointDown= i-1
     pointUp= i+1
     
     endPointUp = len(beautyScores)-1
     endPointDown = 0
     
     scoreUp= startingScore
     scoreDown = startingScore
     
     while(endPointDown < pointDown or endPointUp > pointUp):
       if (pointDown >= endPointDown):
         scoreDown += beautyScores[pointDown]
         pointDown-=1
         endPointDown+=1
       if (pointUp <= endPointUp):
         scoreUp += beautyScores[pointUp]
         pointUp += 1
         endPointUp-=1
         
     if(max(scoreUp,scoreDown) > maxScore):
       maxScore = max(scoreUp,scoreDown)
   return maxScore
   
def main():
  inList= [1,0,2,9,3,8,4,7,5,6]
  print(solution(inList))
  
main()
  
  