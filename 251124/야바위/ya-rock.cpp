#include <iostream>

using namespace std;

int N;
int a[100], b[100], c[100];

bool cup[4] = {false};
int ans = 0;

void initialize() {
    for (int i = 0; i < 4; i++) {
        cup[i] = false;
    }
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    // Please write your code here.
    for (int i = 1; i <= 3; i++) {
        initialize();

        int score = 0;
        cup[i] = true;

        for (int j = 0; j < N; j++) {
            bool ball = cup[a[j]];
            cup[a[j]] = cup[b[j]];
            cup[b[j]] = ball;

            if (cup[c[j]]) score++;
        }

        ans = max(ans, score);
    }

    cout << ans;

    return 0;
}