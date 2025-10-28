#include <iostream>
#include <algorithm>

using namespace std;

int n, k;
int arr[500][500];

int main() {
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Please write your code here.
    int sum[501][501] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum[i+1][j+1] = sum[i][j+1] + sum[i+1][j] + arr[i][j] - sum[i][j];
        }
    }

    int ans = 0;

    for (int i = n; i >= k; i--) {
        for (int j = n; j >= k; j--) {
            ans = max(ans, sum[i][j] - sum[i-k][j] - sum[i][j-k] + sum[i-k][j-k]);
        }
    }

    cout << ans;

    return 0;
}
