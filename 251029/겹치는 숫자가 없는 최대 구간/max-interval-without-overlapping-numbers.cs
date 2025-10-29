using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int n = int.Parse(Console.ReadLine());
        // int[] nums = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        int[] nums = new int[n];
        int idx = 0;

        while (idx < n)
        {
            string line = Console.ReadLine();
            if (string.IsNullOrWhiteSpace(line)) continue;

            foreach (var s in line.Split(' ', StringSplitOptions.RemoveEmptyEntries))
            {
                nums[idx++] = int.Parse(s);
                if (idx == n) break;
            }
        }

        int[] cnt = new int[100001];
        int ans = 0;
        int j = 0;

        for (int i = 0; i < n; i++) {
            

            while (j < n && cnt[nums[j]] < 1) {
                // Console.WriteLine($"i = {i}, j = {j}, cnt[{nums[j]}] = {cnt[nums[j]]}");
                cnt[nums[j]]++;
                j++;
                
            }

            ans = Math.Max(ans, j - i);
            cnt[nums[i]]--;
        }

        Console.Write(ans);
    }
}
