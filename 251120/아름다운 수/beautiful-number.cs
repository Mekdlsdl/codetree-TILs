using System;

public class Codetree
{  
    static int n;
    static int[] selected;

    static int ans = 0;

    public static bool Check() {
        int idx = 0;
        int cnt = 0;

        while (idx < n) {
            cnt = 0;
            int num = selected[idx];

            if ((idx + num) > n) return false;

            for (int i = idx; i < idx + num; i++) {
                if (num != selected[i]) {
                    idx = i + 1;
                    break;
                }
                cnt++;
            }

            if (cnt % num != 0) return false;
            idx += num;
        }

        return true;
    }

    public static void Choose(int cnt) {
        if (cnt == n + 1) {
            if (Check()) ans++;

            return;
        }

        for (int i = 1; i <= 4; i++) {
            selected[cnt - 1] = i;
            Choose(cnt + 1);
        }
    }

    public static void Main()
    {
        // Please write your code here.
        n = int.Parse(Console.ReadLine());

        selected = new int[n];

        selected[0] = 1;
        Choose(1);

        Console.WriteLine(ans);
    }
}
