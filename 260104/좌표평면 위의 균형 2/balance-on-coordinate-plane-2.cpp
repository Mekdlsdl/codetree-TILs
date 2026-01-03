#include <iostream>

using namespace std;

int n;
int xs[100], ys[100];

int dots[4] = {0};
int ans = 100;

void Initialize() {
    for (int i = 0; i < 4; i++) {
        dots[i] = 0;
    }
}

void Check() {
    int max_n = 0;
    
    for (int i = 0; i < 4; i++) {
        max_n = max(dots[i], max_n);
    }

    ans = min(ans, max_n);
}

void Simulation(int dx, int dy) {
    Initialize();

    for (int i = 0; i < n; i++) {
        if (xs[i] < dx && ys[i] > dy) dots[0]++;
        else if (xs[i] > dx && ys[i] > dy) dots[1]++;
        else if (xs[i] < dx && ys[i] < dy) dots[2]++;
        else dots[3]++;
    }

    Check();
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> xs[i] >> ys[i];
    }

    // Please write your code here.

    for (int x = 2; x <= 100; x += 2) {
        for (int y = 2; y <= 100; y += 2) {
            Simulation(x, y);
        }
    }

    cout << ans;

    return 0;
}