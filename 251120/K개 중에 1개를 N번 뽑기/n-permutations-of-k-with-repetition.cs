using System;

public class Codetree
{  
    static int n;
    static int k;

    static int[] selected;
    // static Stack<int> selected = new Stack<int>();

    public static void Print() {
        for (int i = 0; i < n; i++) {
            Console.Write($"{selected[i]} ");
        }
        Console.WriteLine();
    }

    public static void Choose(int cnt) {
        if (cnt == n + 1)  {
            Print();
            return;
        }

        for (int i = 1; i <= k; i++) {
            selected[cnt - 1] = i;
            Choose(cnt + 1);
        }
    }

    public static void Main()
    {
        // Please write your code here.
        int[] arr =  Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        (k, n) = (arr[0], arr[1]);

        selected = new int[n];

        selected[0] = 1;
        Choose(1);
    }
}
