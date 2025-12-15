#include <iostream>

using namespace std;

int n;
int x[20], y[20];

int s[2][3] = {-1}; // 0 = 가로, 1 = 세로

bool can = false;


// 고를 수 있는 직선인지 체크
bool CanChoose(int num, int st) {
    for (int i = 0; i < 3; i++) {
        if (s[num][i] == st) return false;
    }

    return true;
}


// 다 지나는지 체크
bool Simulation() {
    for (int i = 0; i < n; i++) {
        if (CanChoose(0, x[i]) && CanChoose(1, y[i])) return false;
    }

    return true;
}


// 0부터 10까지 직선 3개 고르기
void Choose(int cnt, int idx) {
    if (cnt == 3) {
        if (!can && Simulation()) can = true;
        return;
    }

    for (int i = 0; i <= 10; i++) {
        // 가로에만 넣기
        if (CanChoose(0, i)) {
            s[0][idx] = i;
            s[1][idx] = -1;
            Choose(cnt + 1, idx + 1);
        }
        
        // 세로에만 넣기
        if (CanChoose(1, i)) {
            s[0][idx] = -1;
            s[1][idx] = i;
            Choose(cnt + 1, idx + 1);
        }
        
        // 둘 다 넣기
        if (CanChoose(0, i) && CanChoose(1, i)) {
            s[0][idx] = i;
            s[1][idx] = i;
            Choose(cnt + 2, idx + 1);
        }
    }
}



int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    Choose(0, 0);

    cout << (can ? 1 : 0);

    return 0;
}