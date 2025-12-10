#include <iostream>

using namespace std;

int n;
int x1[10], y1[10];
int x2[10], y2[10];

const int MAX_IDX = 201;
int arr[MAX_IDX][MAX_IDX] = {0};
int offset = 100;

int ans = 0;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }

    // Please write your code here.

    for (int i = 0; i < n; i++) {
        int color = (i % 2 == 0) ? 1 : 2; // 1 = red, 2 = blue

        for (int x = x1[i] + offset; x < x2[i] + offset; x++) {
            for (int y = y1[i] + offset; y < y2[i] + offset; y++) {
                arr[x][y] = color;
            }
        }
    }

    for (int i = 0; i < MAX_IDX; i++) {
        for (int j = 0; j < MAX_IDX; j++) {
            if (arr[i][j] == 2) ans++;
        }
    }

    cout << ans;

    return 0;
}