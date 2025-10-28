#include <iostream>
#include <algorithm>

using namespace std;

int n, k;
int arr[100000];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int sum[100000];
    sum[0] = arr[0];

    int ans = -201;

    for (int i = 1; i < n; i++) {
        sum[i] = sum[i - 1] + arr[i];

        if (i >= k-1) {
            ans = max(ans, sum[i] - sum[i - k]);
        }
    }

    cout << ans << '\n';
     
    return 0;
}
