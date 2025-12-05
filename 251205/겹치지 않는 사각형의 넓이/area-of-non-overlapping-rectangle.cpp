#include <iostream>

using namespace std;

int x1[3], y1[3];
int x2[3], y2[3];

const int MAX_NUM = 2001;

bool arr[MAX_NUM][MAX_NUM] = {false};
int offset = 1000;

int ans = 0;

void SetArr(int idx) {
    for (int i = x1[idx] + offset; i < x2[idx] + offset; i++) {
        for (int j = y1[idx] + offset; j < y2[idx] + offset; j++) {
            if (idx == 2) arr[i][j] = false;
            else arr[i][j] = true;
        }
    }
}

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];

    // Please write your code here.
    for (int i = 0; i <= 2; i++) {
        SetArr(i);
    }

    for (int i = 0; i < MAX_NUM; i++) {
        for (int j = 0; j < MAX_NUM; j++) {
            if (arr[i][j]) ans++;
        }
    }

    cout << ans;

    return 0;
}