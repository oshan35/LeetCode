
def solution(s,pos):
    global seqCount   
    if (len(s)-1 < pos):
        win = True
        for f in fobidentList:
            l = len(f)
            if s[0:l] == f:
                win = False
        if win:
            seqCount+=1
        return 
    newsB =s[:pos]+"B"+s[pos+1:] # "B     ",pos =0  -> "BB   ", pos=1,
    newsR = s[:pos]+"R"+s[pos+1:] # "R    ",pos =0 -> "BR   "
    pos+=1
    solution(newsB,pos)
    solution(newsR,pos)
    
    
def main():
    global seqCount
    global fobidentList
    fobidentList = []
    seqCount = 0
    num_of_test_cases = int(input())
    test_cases = []
    for i in range(num_of_test_cases):

        N,P= input().split()
        N,P = int(N),int(P)
        forbidentList = []
        for j in range(P):
            fobident = input()

            forbidentList.append(fobident)

        test_cases.append([N,P,forbidentList])

    c = 1
    for test in test_cases:
        instring = " "*test[0] #"     "

        fobidentList = test[2]

        solution(instring,0)

        print('Case #',c,seqCount)
        c+=1
        
main()