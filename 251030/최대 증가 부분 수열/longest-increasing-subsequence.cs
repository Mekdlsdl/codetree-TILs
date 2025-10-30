using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int n = int.Parse(Console.ReadLine());
        int[] arr = new int[n];

        int idx = 0;

        while (idx < n) {
            string line = Console.ReadLine();

            foreach (string l in line.Split()) {
                arr[idx++] = int.Parse(l);
                if (idx == n) break;
            }
        }

        int[] dp = new int[n + 1];
        dp[0] = 1;

        for (int i = 1; i < n; i++) {
            for (int j = i - 1; j >= 0; j--) {
                if (arr[i] > arr[j]) {
                    dp[i] = Math.Max(dp[i], dp[j]);
                    // break;
                }
            }

            dp[i]++;
        }

        int ans = -1;
        for (int i = 0; i < n; i++) {
            // Console.Write($"{dp[i]} ");
            ans = Math.Max(ans, dp[i]);
        }

        Console.Write(ans);
    }
}
