def crackPasswd():
   
    for n1 in range(10):
        n2,n3,n4 = 0,0,0
        if n1 % 2 == 0:
            n2 = n1+3
        else:
            n2 = n1+5

        if n2 >9:
            n2 =0

        n3 = n1+n2

        if n3 >9:
            n3 = 0

        if n3 % 2 != 0:
            n4 = n1+3
        else:
            n4 = n1 +2
        
        if n4>9:
            n4=0

        print(f"{n1}{n2}{n3}{n4}")
       
   


crackPasswd()

