#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];
int arr[201] = {0};

int offset = 100;
int max_idx = 0;
int ans = 0;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        max_idx = max(max_idx, x2[i] + offset);
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        int n1 = x1[i] + offset;
        int n2 = x2[i] + offset;

        for (int j = n1; j < n2; j++) {
            arr[j] += 1;
        }
    }

    for (int i = 0; i < max_idx; i++) {
        // cout << arr[i] << " ";
        ans = max(ans, arr[i]);   
    }

    cout << ans;

    return 0;
}