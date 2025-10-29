using System;
using System.Collections.Generic;

public class Codetree
{  
    static int n, m;
    static int[,] graph;
    static int[,] visited;

    static bool CanGo(int nx, int ny) {
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) return false;
        if (visited[nx, ny] == 1) return false;
        if (graph[nx, ny] == 0) return false;
        return true;
    }

    public static void Main()
    {
        // Please write your code here.
        int[] arr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        (n, m) = (arr[0], arr[1]);

        graph = new int[n, m];
        for (int i = 0; i < n; i++) {
            string line = Console.ReadLine();
            string[] parts = line.Split();

            for (int j = 0; j < m; j++) {
                graph[i, j] = int.Parse(parts[j]);
            }
        }

        visited = new int[n, m];
        Queue<(int, int)> q = new Queue<(int, int)>();

        visited[0, 0] = 1;
        q.Enqueue((0, 0));

        int[] dx = { 0, 1 }, dy = { 1, 0 };

        while (q.Count > 0) {
            (int x, int y) = q.Dequeue();

            for (int i = 0; i < 2; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (CanGo(nx, ny)) q.Enqueue((nx, ny));
            }
            
            visited[x, y] = 1;
        }

        Console.Write(visited[n-1, m-1]);
    }
}
