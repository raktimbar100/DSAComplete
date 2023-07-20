import java.util.*;
class Adj{
    static class Edge{
    int source;
    int dest;
    Edge(int s,int d)
    {
        source=s;
        dest=d;
    }
}
    static void createGraph(ArrayList<Edge> graph[])
    {
        for(int i=0;i<graph.length;i++)
        {
            graph[i]=new ArrayList<Edge>();
        }
        graph[0].add(new Edge(0,1));
        graph[0].add(new Edge(0,2));
        graph[1].add(new Edge(1,3));
        graph[2].add(new Edge(2,4));
        graph[3].add(new Edge(3,4));
        graph[3].add(new Edge(3,5));
        graph[4].add(new Edge(4,5));
        graph[5].add(new Edge(5,6));
      /*
     
      */
        
    }
    public static void bfs(ArrayList<Edge> graph[],int v)
    {
        Queue<Integer> q=new LinkedList<>();
        boolean vis[]=new boolean[v];
        q.add(0);
        while(!q.isEmpty())
        {
            int curr=q.remove();
            if(vis[curr]==false){
                System.out.print(curr+" ");
                vis[curr]=true;
                for(int i=0;i<graph[curr].size();i++)
                {
                    Edge e=graph[curr].get(i);
                    q.add(e.dest);
                }
            }
        }
    }
    public static void main(String[] args)
    {
        int v=7;
        ArrayList<Edge> graph[]=new ArrayList[v];
        createGraph(graph);
        //   for(int i=0;i<graph[2].size();i++)
        // {
        //     Edge e=graph[2].get(i);
        //     System.out.print(e.dest+" ");
        // }
        bfs(graph,v);
    }
    
}
