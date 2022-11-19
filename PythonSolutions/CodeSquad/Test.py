def incription(n):
    i =0 
    # encript_list = []
    while i<n:
        list = [0]*n
        j =0
        while j < n:
            val = i * j
            if val >= 10:
                val = val % 10
            # list[j] = val
            print(val,end="")
            j+=1
        
        print("")
        i+=1
    
n = int(input())
incription(n)