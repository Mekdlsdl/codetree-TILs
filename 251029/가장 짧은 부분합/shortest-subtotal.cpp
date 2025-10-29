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
        
        for (int j = i + 1; j < n; j++) {
            if (sum > s) ans = min(ans, j - i);

            sum += arr[j];
        }
    }

    if (ans == 100001) ans = -1;
    cout << ans;

    return 0;
}
