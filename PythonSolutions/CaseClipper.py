def CaesarCipher(strParam,num):
    alphbet = "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z"
    alphbet = alphbet.split(",")
    strReturn =""
    for i in range(len(strParam)):
        elemnt = strParam[i]
        indexOfElemnt = alphbet.index(elemnt.lower())

        if elemnt.isupper():
            strReturn += alphbet[indexOfElemnt+num].upper()
        else:
            strReturn += alphbet[indexOfElemnt+num]
        

    # code goes here
    return strReturn

input = "Hello"
print(CaesarCipher(input,4))
