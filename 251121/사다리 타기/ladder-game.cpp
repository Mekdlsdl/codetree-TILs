#include <iostream>

using namespace std;

int n, m;
int a[15], b[15];

int selected[15] = {0};
int result[11];
int orgin[11];

int ans = 16;

bool CanGo(int x, int y) {
    if (x < 0 || x >= 15 || y < 0 || y >= (n - 1)) return false;
    return true;
}

void Simulation(int ladder[][10]) {
    // 사다리 타기
    for (int i = 0; i < n; i++) {
        int idx = i;
        int x = 0; int y = idx;

        while (x < 15) {
            // 양쪽 다 확인
            for (int j = -1; j < 1; j++) {
                int nx = x; int ny = y + j;

                if (CanGo(nx, ny)) {
                    if (ladder[nx][ny] == 1) {
                        idx = (j == -1) ? idx - 1 : idx + 1;
                        y = idx;
                        
                        break;
                    }
                }
            }
            x++;
        }

        result[idx] = i + 1;
    }
}


void SetLadder(int hor[15]) {

    int ladder[15][10] = {0};

    // 사다리 표시
    for (int i = 0; i < m; i++) {
        if (hor[i] == 1) {
            int x = b[i] - 1;
            int y = a[i] - 1;

            ladder[x][y] = 1;
        }
    }

    Simulation(ladder);
}

bool Compare() {
    for (int i = 0; i < n; i++) {
        if (result[i] != orgin[i]) return false;
    }
    return true;
} 

void Choose(int idx, int cnt) {
    if (idx == m) {
        SetLadder(selected);

        if (Compare()) {
            ans = min(ans, cnt);
        }

        return;
    }

    selected[idx] = 0;
    Choose(idx + 1, cnt);

    selected[idx] = 1;
    Choose(idx + 1, cnt + 1);
}



int main() {
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
    }

    // 전체 사다리
    int hor[15] = {0};
    for (int i = 0; i < 15; i++) {
        hor[i] = 1;
    }
    SetLadder(hor);

    for (int i = 0; i < n; i++) {
        orgin[i] = result[i];
    }

    // 선택된 가로줄만 있는 사다리
    Choose(0, 0);

    cout << ans;

    return 0;
}
