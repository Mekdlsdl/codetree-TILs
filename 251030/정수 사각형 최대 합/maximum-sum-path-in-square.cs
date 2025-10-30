using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int n = int.Parse(Console.ReadLine());

        int[][] graph = new int[n][];
        for (int i = 0; i < n; i++)
        {
            string line = Console.ReadLine();
            if (string.IsNullOrWhiteSpace(line)) { i--; continue; }

            graph[i] = Array.ConvertAll(
                line.Split(' ', StringSplitOptions.RemoveEmptyEntries),
                int.Parse
            );
        }

        int[][] memo = new int[n][];

        for (int i = 0; i < n; i++) {
            memo[i] = new int[n];
        }

        memo[0][0] = graph[0][0];

        for (int i = 1; i < n; i++) {
            memo[0][i] = memo[0][i - 1] + graph[0][i];
            memo[i][0] = memo[i - 1][0] + graph[i][0];
        }

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < n; j++) {
                memo[i][j] = Math.Max(memo[i - 1][j], memo[i][j - 1]) + graph[i][j];
            }
        }

        Console.Write(memo[n - 1][n - 1]);
    }
}
