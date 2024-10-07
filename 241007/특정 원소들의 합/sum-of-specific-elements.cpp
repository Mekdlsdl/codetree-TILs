#include <iostream>
using namespace std;

int main() {
    int arr[4][4];
    int cnt = 0;
    int ans = 0;

    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            cin >> arr[i][j];

            if (j <= cnt) {
                ans += arr[i][j];
            }
        }
        cnt += 1;
    }

    cout << ans;
    return 0;
}