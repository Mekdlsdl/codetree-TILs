#include <iostream>
#include <algorithm>

using namespace std;

int arr[5];

int main() {
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];

        sum += arr[i];
    }

    int ans = 1000;
    int t1 = 0, t2 = 0, t3 = 0;

    // 한명 선택
    for (int i = 0; i < 5; i++) {
        t1 = arr[i];

        // 두명 선택
        for (int j = 0; j < 5; j++) {
            if (j == i) continue;

            for (int k = j + 1; k < 5; k++) {
                if (k == i) continue;

                t2 = arr[j] + arr[k];
                t3 = sum - t2 - t1;

                if (t1 == t2 || t2 == t3 || t1 == t3) continue;
                        
                // 세 팀 차이 비교
                ans = min(ans, max({t1, t2, t3}) - min({t1, t2, t3}));
                // cout << ans << " = " << t1 << ", " << t2 << ", " << t3 << endl;
            }
        }
    }

    if (ans == 1000) ans = -1;
    cout << ans;

    return 0;
}