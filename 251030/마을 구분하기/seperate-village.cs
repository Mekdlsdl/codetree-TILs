using System;
using System.Collections.Generic;

public class Codetree
{  
    static int n;
    static int[][] graph;
    static List<int> ans = new List<int>();

    static int[] dx = { -1, 0, 1, 0 }, dy = { 0, 1, 0, -1 };

    static bool CanGo(int nx, int ny) {
        if (nx < 0 || nx >= n || ny < 0 || ny >= n) return false;
        if (graph[nx][ny] == 0) return false;
        return true;
    }

    static int dfs(int x, int y) {
        int cnt = 1;
        graph[x][y] = 0;

        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];

            if (CanGo(nx, ny)) {
                cnt += dfs(nx, ny);
            }
        }

        return cnt;
    }

    public static void Main()
    {
        // Please write your code here.
        n = int.Parse(Console.ReadLine());

        graph = new int[n][];
        for (int i = 0; i < n; i++)
        {
            string line = Console.ReadLine();
            if (string.IsNullOrWhiteSpace(line)) { i--; continue; }

            graph[i] = Array.ConvertAll(
                line.Split(' ', StringSplitOptions.RemoveEmptyEntries),
                int.Parse
            );
        }

        (int x, int y) = (0, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (CanGo(i, j)) {
                    int a = dfs(i, j);
                    ans.Add(a);
                }
            }
        }

        Console.WriteLine(ans.Count);
        ans.Sort();
        foreach (int a in ans) {
            Console.WriteLine(a);
        }
    }
}
