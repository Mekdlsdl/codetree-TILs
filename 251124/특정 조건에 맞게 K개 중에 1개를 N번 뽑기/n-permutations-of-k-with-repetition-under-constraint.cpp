#include <iostream>

using namespace std;

int K, N;
int selected[8];

void Choose(int idx, int cnt) {
    if (cnt == 2) {
        return;
    }

    if (idx == N) {
        for (int i = 0; i < N; i++) {
            cout << selected[i] << " ";
        }
        cout <<'\n';

        return;
    }

    for (int i = 1; i <= K; i++) {
        selected[idx] = i;

        if (idx > 0 && selected[idx - 1] == i) {
            Choose(idx + 1, cnt + 1);
        }
        else {
            Choose(idx + 1, 0);
        }
    }
}

int main() {
    cin >> K >> N;

    Choose(0, 0);

    return 0;
}
