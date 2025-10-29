#include <iostream>
#include <algorithm>

using namespace std;

int n, s;
int arr[100000];

int main() {
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int ans = 100001;
    for (int i = 0; i < n; i++) {
        int sum = arr[i];

        if (sum >= s) {
            ans = min(ans, 1);
            // cout << i << " " << ans << '\n';
        }
        
        for (int j = i + 1; j < n; j++) {
            sum += arr[j];

            if (sum >= s) {
                ans = min(ans, j - i + 1);
                // cout << i << " " << j << " " << ans << '\n';
            }
        }
    }

    if (ans == 100001) ans = -1;
    cout << ans;

    return 0;
}
