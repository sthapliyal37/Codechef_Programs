class Graph:
    def __init__(self, V): 
        self.V = V 
        self.adj = [[] for i in range(V)] 
  
    def addEdge(self, v, w): 
        self.adj[v].append(w)   
        self.adj[w].append(v)  
      
    def DFSUtil(self, v, visited): 
          
        visited[v] = True
      
        i = self.adj[v][0] 
        for i in self.adj[v]: 
            if (not visited[i]):  
                self.DFSUtil(i, visited)  
      
    def countNotReach(self, v): 
          
        visited = [False] * self.V 
      
        self.DFSUtil(v, visited)  
      
        count = 0
        for i in range(self.V): 
            if (visited[i] == False):  
                count += 1
        return count 
  
if __name__ == '__main__': 
  
    g = Graph(3000000)  
    g.addEdge(0, 1)  
    g.addEdge(0, 2)  
    g.addEdge(1, 2)  
    g.addEdge(3, 4)  
    g.addEdge(4, 5)  
    g.addEdge(6, 7)  
  
    print(g.countNotReach(2)
