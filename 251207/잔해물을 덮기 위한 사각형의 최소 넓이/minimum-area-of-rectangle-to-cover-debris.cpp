#include <iostream>

using namespace std;

int x1[2], y1[2];
int x2[2], y2[2];

bool arr[2001][2001] = {false};
int offset = 1000;

int sx = -1; int ex = -1;
int sy = -1; int ey = -1;

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];

    // Please write your code here.
    for (int i = 0; i <= 1; i++) {
        for (int j = x1[i]; j <= x2[i]; j++) {
            for (int k = y1[i]; k <= y2[i]; k++) {
                arr[j][k] = (i == 0) ? true : false;
            }
        }
    }

    for (int i = x1[0]; i <= x2[0]; i++) {
        for (int j = y1[0]; j <= y2[0]; j++) {
            if (arr[i][j]) {
                if (sx == -1) sx = i;
                else ex = i;

                if (sy == -1) sy = j;
                else ey = j;
            }
        }
    }
    
    // cout << sx << " " << ex << " " << sy << " " << ey << '\n';
    int ans = (ex - sx) * (ey - sy);
    cout << ans;


    return 0;
}