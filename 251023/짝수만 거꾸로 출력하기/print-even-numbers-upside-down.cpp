#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int cnt, arr[n];
    cnt = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        if (a % 2 == 0) {
            arr[cnt++] = a;    
        }
    }

    for (int i = cnt - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}