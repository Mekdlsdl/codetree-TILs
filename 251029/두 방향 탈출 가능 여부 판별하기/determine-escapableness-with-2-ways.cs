using System;
using System.Collections.Generic;

public class Codetree
{  
    static int n, m;
    static int[][] graph;

    static bool CanGo(int nx, int ny) {
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) return false;
        if (graph[nx][ny] != 1) return false;
        return true;
    }

    public static void Main()
    {
        // Please write your code here.
        int[] arr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        (n, m) = (arr[0], arr[1]);

        graph = new int[n][];
        for (int i = 0; i < n; i++)
        {
            graph[i] = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        }

        Queue<(int, int)> q = new Queue<(int, int)>();

        graph[0][0] = 2;
        q.Enqueue((0, 0));

        int[] dx = { 0, 1 }, dy = { 1, 0 };

        while (q.Count > 0) {
            (int x, int y) = q.Dequeue();

            for (int i = 0; i < 2; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (CanGo(nx, ny)) {
                    graph[nx][ny] = 2;
                    q.Enqueue((nx, ny));
                }
            }
        }

        Console.Write(graph[n-1][m-1] == 2 ? 1 : 0);
    }
}
