

        


visited = [False]*10
count =0

def check_connections(graph,connections,nodenum): # [6] -> 4 -> 
    global visited
  
    visited[nodenum] = True
    for i in range(len(connections)): # [1,4]
        curr = connections[i] # 4
        if not visited[curr]:
            visited[curr] = True
            if graph[curr] != None :
                check_connections(graph,graph[curr],curr)
                

# graph = [
#    [1,4], # 0 node
#    [0,2,3,4], # node 1
#    [1,4,5,6], # node 2
#    [1,6], # node 3
#    [0,1,2], # node 4
#    [2,6], # node 5
#    [2,3,5], # node 6
#    [8,9], # node 7
#    [7,9], # node 8
#    [7,8] # node 9
# ]


graph2 = [
   [1,2], # Nonde 0
   [0], # Node 1
   [0], # Nonde 2
   [5], # Nonde 3
   [5], # Nonde 4
   [3,4,6,7], # Nonde 5
   [5],
   [5]

]

for i in range(len(graph2)):
    if not visited[i]:
        result = check_connections(graph2,graph2[i],i)
        count+=1

print(count)

