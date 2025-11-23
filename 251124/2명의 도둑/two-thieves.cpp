#include <iostream>
#include <algorithm>

using namespace std;

int n, m, c;
int weight[10][10];
bool visited[10][10] = {false};

int t[2][5] = {0};
bool selected[5] = {false};
int max_t = 0;

int ans = 0;

bool CanGo(int x, int y) {
    if (x < 0 || x >= n || y < 0) return false;

    for (int ny = y; ny < y + m; ny++) {
        if (ny >= n) return false;
        if (visited[x][ny]) return false;
    }

    return true;
}

void Check2(int t_num) {
    int sum = 0;
    int sum2 = 0;

    for (int i = 0; i < m; i++) {
        if (selected[i]) {
            int w = t[t_num][i];
            sum += w;
            sum2 += w * w;
        }
    }

    if (sum <= c) max_t = max(max_t, sum2);
}

void Choose2(int cnt, int t_num) {
    if (cnt == m) {
        Check2(t_num);
        return;
    }

    selected[cnt] = true;
    Choose2(cnt + 1, t_num);

    selected[cnt] = false;
    Choose2(cnt + 1, t_num);
}

void Check() {
    int total = 0;
    int sum = 0;
    int sum_2 = 0;
    int w = 0;

    for (int i = 0; i < 2; i++) {
        sort(t[i], t[i] + m);

        sum = 0;
        sum_2 = 0;
        
        for (int j = m - 1; j >= 0; j--) {
            w = t[i][j];

            if (sum + w > c) {
                max_t = 0;
                Choose2(0, i);
                sum_2 = max_t;
                break;
            }

            sum += w;
            sum_2 += w * w;
        }

        total += sum_2;
    }
    
    ans = max(total, ans);
}

void Choose(int x, int y, int cnt) {
    if (cnt == 2) {
        Check();
        return;
    }

    int nx = x;
    int ny = y;

    while (nx < n) {
        if (CanGo(nx, ny)) {
            for (int i = 0; i < m; i++) {
                visited[nx][ny + i] = true;

                t[cnt][i] = weight[nx][ny + i]; 
            }

            Choose(nx, ny, cnt + 1);

            for (int i = ny; i < ny + m; i++) {
                visited[nx][i] = false;
            }
        }

        
        ny++;

        if (ny >= n) {
            ny = 0;
            nx++;
        }

    }
    
}

int main() {
    cin >> n >> m >> c;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> weight[i][j];
        }
    }

    // Please write your code here.
    Choose(0, 0, 0);

    cout << ans;

    return 0;
}