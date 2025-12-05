#include <iostream>

using namespace std;

int N;
int x[100], y[100];

const int MAX_NUM = 201;
bool arr[MAX_NUM][MAX_NUM];
int offset = 100;

int ans = 0;

void SetArr(int x, int y) {
    x += offset;
    y += offset;

    for (int i = x; i < x + 8; i++) {
        for (int j = y; j < y + 8; j++) {
            arr[i][j] = true;
        }
    }
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    for (int i = 0; i < N; i++) {
        SetArr(x[i], y[i]);
    }

    for (int i = 0; i < MAX_NUM; i++) {
        for (int j = 0; j < MAX_NUM; j++) {
            if (arr[i][j]) ans++;
        }
    }

    cout << ans;

    return 0;
}