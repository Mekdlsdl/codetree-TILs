using System;
using System.Collections.Generic;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int[] arr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        int n = arr[0], m = arr[1];

        List<int>[] graph = new List<int>[n + 1];

        for (int i = 0; i < m; i++) {
            int[] v = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int x = v[0], y = v[1];

            if (graph[x] == null) graph[x] = new List<int>();
            if (graph[y] == null) graph[y] = new List<int>();
            graph[x].Add(y);
            graph[y].Add(x);
        }

        Queue<int> q = new Queue<int>();

        if (graph[1] != null) {
            for (int i = 0; i < graph[1].Count; i++) {
                q.Enqueue(graph[1][i]);
            }
        }
        

        int ans = 0;
        bool[] visited = new bool[n + 1];
        visited[1] = true;

        while (q.Count > 0) {
            int t = q.Dequeue();

            if (!visited[t]) {
                ans++;
                visited[t] = true;

                for (int i = 0; i < graph[t].Count; i++) {
                    q.Enqueue(graph[t][i]);
                }
            }
        }

        Console.Write(ans);
    }
}
