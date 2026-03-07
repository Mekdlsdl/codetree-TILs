#include <iostream>

using namespace std;

int N, K, P, T;
int t[250];
int x[250];
int y[250];

// 개발자 1~100
int d[101] = {0}; // 감염 여부 (0, 1)
int c[101] = {0}; // 전염 잔여횟수 (0 ~ K)

int main() {
    cin >> N >> K >> P >> T;

    for (int i = 0; i < T; i++) {
        cin >> t[i] >> x[i] >> y[i];
    }

    // Please write your code here.
    d[P] = 1;
    c[P] = K;

    int x1[251] = {0};
    int y1[251] = {0};

    for (int i = 0; i < T; i++) {
        x1[t[i]] = x[i];
        y1[t[i]] = y[i];
    }

    for (int i = 1; i < 251; i++) {
        int s1 = x1[i];
        int s2 = y1[i];

        // 감염 되어있고 전염 시킬 수 있는 경우
        if (d[s1] == 1 && c[s1] > 0) {
            // 악수 당한 사람 감염
            d[s2] = 1;
            c[s2] = K;

            // 전염 시킨 사람 횟수 감소
            c[s1]--;
        }
    }

    for (int i = 1; i < N + 1; i++) {
        cout << d[i];
    }

    return 0;
}