using System;

public class Codetree
{  
    static int n;
    static int m;

    static int[] A;
    static int[] B;


    static bool IsSubsequence() {
        int idx = 0;

        for (int i = 0; i < m; i++) {
            while (idx < n && A[idx] != B[i]) {
                idx++;
            }

            if (idx == n) return false;
            else idx++;
        }
        
        return true;
    }

    public static void Main()
    {
        // Please write your code here.
        int[] arr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        n = arr[0];
        m = arr[1];

        A = new int[n];
        B = new int[m];

        int idx = 0;

        while (idx < n) {
            string line = Console.ReadLine();

            foreach (string l in line.Split()) {
                A[idx++] = int.Parse(l);
                if (idx == n) break;
            }
        }

        idx = 0;

        while (idx < m) {
            string line = Console.ReadLine();

            foreach (string l in line.Split()) {
                B[idx++] = int.Parse(l);
                if (idx == m) break;
            }
        }

        if (IsSubsequence()) Console.WriteLine("Yes");
        else Console.WriteLine("No");
    }
}
