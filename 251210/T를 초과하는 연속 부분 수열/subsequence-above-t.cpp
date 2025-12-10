#include <iostream>

using namespace std;

int n, t;
int arr[1000];

int ans = 0;

int main() {
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        int num = arr[i];

        if (num > t) cnt++;
        else cnt = 0;

        ans = max(ans, cnt);
    }

    cout << ans;

    return 0;
}