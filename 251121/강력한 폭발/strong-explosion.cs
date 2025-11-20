using System;
using System.Collections.Generic;

public class Codetree
{  
    static int n;
    static int[][] graph;

    static int total = 0;
    static int ans = 0;

    static int[] selected;
    static List<(int, int)> loc = new List<(int, int)>();


    public static void SetLoc() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (graph[i][j] == 1) {
                    loc.Add((i, j));
                    total++;
                }
            }
        }
    }


    public static bool CanPut(int x, int y) {
        if (x < 0 || x >= n || y < 0 || y >= n) return false;
        return true;
    }


    public static void PutBomb() {
        int[][] temp = new int[n][];

        for (int k = 0; k < n; k++) {
            temp[k] = new int[n];
        }


        for (int k = 0; k < total; k++) {
            (int x, int y) = loc[k];

            switch(selected[k]) {
                case 1:
                    for (int i = x - 2; i <= x + 2; i++) {
                        if (CanPut(i, y)) {
                            temp[i][y] = 1;
                        }
                    }
                    break;

                case 2:
                    // (0,0) (-1,0) (1,0) (0,-1) (0,1)
                    for (int i = -1; i <= 1; i++) {
                        if (CanPut(x + i, y)) {
                            temp[x + i][y] = 1;
                        }

                        if (CanPut(x, y + i)) {
                            temp[x][y + i] = 1;
                        }
                    }
                    
                    break;

                case 3:
                    // (0,0) (-1,-1) (-1,1) (1,-1) (1,1)
                    for (int i = -1; i <= 1; i++) {
                        if (CanPut(x + i, y + i)) {
                            temp[x + i][y + i] = 1;
                        }

                        if (CanPut(x + i, y - i)) {
                            temp[x + i][y - i] = 1;
                        }
                    }
                    
                    break;
            }
        }

        Check(temp);
    }

    public static void Check(int[][] temp) {
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (temp[i][j] == 1) {
                    cnt++;
                }
            }
        }

        // if (ans < cnt) {
            // for (int m = 0; m < total; m++) {
            //     Console.Write($"{selected[m]} ");
            // }
            // Console.WriteLine();

        //     for (int k = 0; k < n; k++) {
        //         for (int l = 0; l < n; l++) {
        //             Console.Write($"{temp[k][l]} ");
        //         }
        //         Console.WriteLine();
        //     }
        //     Console.WriteLine();
        // }
        ans = Math.Max(ans, cnt);
    }

    public static void Choose(int cnt) {
        if (cnt == total + 1) {
            PutBomb();
            
            return;
        }

        for (int i = 1; i <= 3; i++) {
            selected[cnt - 1] = i;
            Choose(cnt + 1);
        }
        
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

        SetLoc();
        selected = new int[total];
        Choose(1);

        Console.WriteLine(ans);
    }
}
