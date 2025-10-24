#include <iostream>

using namespace std;

int N;
int x1[10], y1[10];
int x2[10], y2[10];
int offset = 100;
int arr[202][202] = {0};
int ans = 0;

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        for (int k = x1[i]; k < x2[i]; k++) {
            for (int j = y1[i]; j < y2[i]; j++) {
                arr[k + offset][j + offset]++;
            }
        }
    }

    // Please write your code here.
    for (int i = 0; i < 202; i++) {
        for (int j = 0; j < 202; j++) {
            if (arr[i][j] >= 1)  {
                ans++;
                // cout << ans << ") " << i << ", " << j << endl;
            }
        }
    }

    cout << ans;
    
    return 0;
}