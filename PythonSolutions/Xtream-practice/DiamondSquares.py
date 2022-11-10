def isDimandSquare(graph):
    m = len(graph)
    n = len(graph[0])

    validRow = True
    validCol = True
    oneNr = 0
    twoNr = 0
    for row in graph:
        oneCount = 0
        for num in row:
            if num == 1:
                oneCount+=1
        if oneCount == 2:
            twoNr +=1
        elif oneCount ==1:
            oneNr +=1
        else:
            return False
    if not (oneNr == 2 and twoNr == len(graph)-2):
        validRow = False
    
    oneNc = 0
    twoNc = 0

    for col in range(len(graph)):
        oneCount = 0

        for r in graph:
            if r[col] == 1:
                oneCount +=1
            
        if oneCount == 2:
            twoNc += 1
        elif oneCount == 1:
            oneNc += 1
        else:
            return False

    if not (oneNc == 2 and twoNc == len(graph)-2):
        validCol = False
    
    if validCol and validRow:
        return True
    else:
        return False


n = int(input())



for i in range(n):
    size = int(input())

    graph = []

    for j in range(size):
        list = input().split(" ")
        numList = [int(n) for n in list]

        
        graph.append(numList)
        
    

    answer = isDimandSquare(graph)
    if answer:
        print("YES")
    else:
        print("NO")

