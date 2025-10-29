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

    int sum = 0;
    int j = 0;

    for (int i = 0; i < n; i++) {
        
        while (j < n && sum < s) {
            sum += arr[j];
            j++;
        }

        if (sum >= s) ans = min(ans, j - i);
        
        sum -= arr[i];
    }

    if (ans == 100001) ans = -1;
    cout << ans;

    return 0;
}
