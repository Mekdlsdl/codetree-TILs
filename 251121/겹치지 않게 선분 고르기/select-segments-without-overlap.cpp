#include <iostream>

using namespace std;

int n;
int x1[15], x2[15];

int selected[15];
int ans = 0;

void Check() {
    int temp[1001] = {0};
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (selected[i] == 1) {
            cnt++;

            int x = x1[i];
            int y = x2[i];

            for (int j = x; j <= y; j++) {
                if (temp[j] == 1) return;

                temp[j] = 1;
            }
        }
    }

    if (cnt > 0) {
        // for (int i = 0; i < n; i++) {
        //     cout << selected[i] << " ";
        // }
        // cout << '\n';

        ans = max(cnt , ans);
    }

    return;
}


void Choose(int cnt) {
    if (cnt == n) {
        Check();

        return;
    }

    selected[cnt] = 0;
    Choose(cnt + 1);
    
    selected[cnt] = 1;
    Choose(cnt + 1);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    // Please write your code here.

    
    Choose(0);
    
    cout << ans;

    return 0;
}
