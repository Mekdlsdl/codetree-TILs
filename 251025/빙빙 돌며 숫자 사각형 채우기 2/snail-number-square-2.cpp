#include <iostream>
#include <vector>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    // Please write your code here.
    // 하 -> 우 -> 상 -> 좌
    int dx[4] = { 1, 0, -1, 0 }, dy[4] = { 0, 1, 0, -1 }; 

    vector<vector<int>> arr(n, vector<int>(m, 0));
    

    auto CanGo = [&](int nx, int ny) {
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) return false;
        if (arr[nx][ny] != 0) return false;
        return true;
    };

    auto IsCompleted = [&](int nx, int ny) {
        for (int i = 0; i < 4; i++) {
            if (CanGo(nx, ny)) return false;
        }
        return true;
    };

    int x = 0, y = 0;

    int num = 1;
    int dir = 0;

    while (true) {
        // 종료조건
        if (IsCompleted(x, y)) break;

        arr[x][y] = num;
        num++;

        if (!CanGo(x + dx[dir], y + dy[dir])) {
            dir = (dir + 1) % 4;
        }
        x += dx[dir]; y += dy[dir];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

