#include <iostream>

using namespace std;

int n;
int num[4][4];
int move_dir[4][4];
int r, c;

int ans = 0;

int dx[9] = { 0, -1, -1, 0, 1, 1, 1, 0, -1 };
int dy[9] = { 0, 0, 1, 1, 1, 0, -1, -1, -1 };

bool CanGo(int x, int y, int t) {
    if (x < 0 || x >= n || y < 0 || y >= n) return false;
    if (num[x][y] < t) return false;
    return true;
}

void Choose(int x, int y, int cnt) {
    if (num[x][y] == (n * n) || cnt >= (n * n - 1)) {
        ans = max(ans, cnt);
        return;
    }

    for (int i = 1; i < n; i++) {
        int d = move_dir[x][y];

        int nx = x + (dx[d] * i);
        int ny = y + (dy[d] * i);

        // cout << nx << " " << ny << '\n';

        if (CanGo(nx, ny, num[x][y])) {
            
            Choose(nx, ny, cnt + 1);
        }
        else {
            ans = max(ans, cnt);
        }
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> num[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> move_dir[i][j];

    cin >> r >> c;

    // Please write your code here.
    Choose(r - 1, c - 1, 0);
    cout << ans;

    return 0;
}
