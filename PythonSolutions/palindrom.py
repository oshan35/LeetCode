def Plindrom(strPara):
    excluded = [" ",'0','1','2','3','4','5','6','7','8','9','.',"'",";",":"]
    #strPara = strPara.replace(" ","")
    isPalindrom = True

    p1 = 0
    p2 = len(strPara)-1

    while p1 < p2:
        if strPara[p1] in excluded:
            p1+=1
            continue
        elif strPara[p2] in excluded:
            p2-=1
            continue
        
        if strPara[p1] != strPara[p2]:
            isPalindrom = False
            break
        p1+=1
        p2-=1
    return isPalindrom

str = "never odd or even"

print(Plindrom(str))