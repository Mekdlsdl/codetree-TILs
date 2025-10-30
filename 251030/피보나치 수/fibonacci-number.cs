using System;

public class Codetree
{  
    static int[] memo;

    static int Fibbo(int x) {
        if (memo[x] != -1) {
            return memo[x];
        }

        if (x <= 2) {
            memo[x] = 1;
        }

        else {
            memo[x] = Fibbo(x - 1) + Fibbo(x - 2);
        }

        return memo[x];
    }

    public static void Main()
    {
        // Please write your code here.
        int n = int.Parse(Console.ReadLine());
        memo = new int[n + 1];

        for (int i = 0; i <= n; i++) {
            memo[i] = -1;
        }

        Console.WriteLine(Fibbo(n));
    }
}
