#include <iostream>

using namespace std;

int N;
int A[100];

int selected[3] = {0};

int ans = 0;


void Choose(int idx, int cnt) {
    if (cnt == 3) {
        // for (int i = 0; i < 3; i++) {
        //     cout << selected[i] << " ";
        // }
        // cout << '\n';
        
        ans++;
        return;
    }

    if (idx >= N) {
        return;
    }

    for (int i = idx; i < N; i++) {
        if (selected[cnt - 1] <= A[i]) {
            selected[cnt] = A[i];
            Choose(i + 1, cnt + 1);
        }
    }
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    Choose(0, 0);

    cout << ans;

    return 0;
}