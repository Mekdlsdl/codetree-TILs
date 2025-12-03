#include <iostream>

using namespace std;

int n;
int x[100];
char dir[100];

int arr[2000] = {0};
int offset = 1000;
int ans = 0;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    // Please write your code here.
    int nx = 0;
    int d = 0;

    for (int i = 0; i < n; i++) {
        if (dir[i] == 'R') d = 1;
        else d = -1;

        for (int j = 0; j < x[i]; j++) {
            int nx2 = nx + d;
            int seg = min(nx, nx2) + offset;
            arr[seg]++;
            nx = nx2;
        }
    }

    for (int a : arr) {
        if (a >= 2) ans++;
    }

    cout << ans;

    return 0;
}