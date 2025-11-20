using System;

public class Codetree
{  
    static int n;
    static int[] selected;

    static int ans = 0;


    public static void Choose(int cnt) {
        if (cnt == n + 1) {
            ans++;

            return;
        }

        if (cnt > n + 1) return;

        for (int i = 1; i <= 4; i++) {
            if ((cnt + i - 1) > n) return;

            for (int j = 0; j < i; j++) {
                selected[cnt + j - 1] = i;
            }
            
            Choose(cnt + i);
        }
    }

    public static void Main()
    {
        // Please write your code here.
        n = int.Parse(Console.ReadLine());

        selected = new int[n];

        Choose(1);

        Console.WriteLine(ans);
    }
}
