#include <iostream>

using namespace std;

int n;
int x[1000];
char dir[1000];

// int black[2000] = {0};
// int white[2000] = {0};

// 인덱스 ->  0 = 흰, 1 = 검, 2 = 회
int tile[2][2000] = {0};    // 칠한 횟수
int color[2000];            // 마지막 컬러
int ans[3] = {0};           // 답
int offset = 1000;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    // Please write your code here.

    for (int i = 0; i < 2000; i++) {
        color[i] = -1;
    }

    int nx = 0;     // 현재 위치
    int d = 0;      // 방향
    int col = 0;    // 컬러

    for (int i = 0; i < n; i++) {
        if (dir[i] == 'L') {
            d = -1;
            col = 0;
        }
        else {
            d = 1;
            col = 1;
        }

        for (int t = 0; t < x[i]; t++) {
            int idx = nx + offset;

            tile[col][idx]++;
            color[idx] = col;

            if (t < x[i] - 1) nx += d;
        }
    }

    for (int i = 0; i < 2000; i++) {
        if (tile[0][i] >= 2 && tile[1][i] >= 2) {
            ans[2]++;
        }
        else {
            if (color[i] != -1) ans[color[i]]++;
        }
    }

    // cout << ans[0] << " " << ans[1]
    for (int i = 0; i < 3; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}