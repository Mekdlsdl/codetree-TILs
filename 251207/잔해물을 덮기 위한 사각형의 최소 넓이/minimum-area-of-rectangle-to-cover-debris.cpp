#include <iostream>

using namespace std;

int x1[2], y1[2];
int x2[2], y2[2];

bool arr[2001][2001] = {false};
int offset = 1000;

int sx = 2001; int ex = -1;
int sy = 2001; int ey = -1;

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];

    // Please write your code here.
    for (int i = 0; i <= 1; i++) {
        x1[i] += offset;
        x2[i] += offset;
        y1[i] += offset;
        y2[i] += offset;

        for (int j = x1[i]; j <= x2[i]; j++) {
            for (int k = y1[i]; k <= y2[i]; k++) {
                arr[j][k] = (i == 0) ? true : false;
            }
        }
    }

    bool chk = false;

    for (int i = x1[0]; i <= x2[0]; i++) {
        for (int j = y1[0]; j <= y2[0]; j++) {
            if (arr[i][j]) {
                chk = true;

                sx = min(sx, i);
                ex = max(ex, i);

                sy = min(sy, j);
                ey = max(ey, j);
            }
        }
    }
    
    // cout << sx << " " << ex << " " << sy << " " << ey << '\n';
    
    int ans = (ex - sx) * (ey - sy);
    if (!chk) ans = 0;
    
    cout << ans;


    return 0;
}