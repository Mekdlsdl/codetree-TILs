#include <iostream>

using namespace std;

int n;
int x[1000];
char dir[1000];

int arr[200001] = {0};      // -1 = 흰, 0 = 회, 1 = 검 
int color[2] = {0};         // 0 = 흰, 1 = 검
int offset = 100000;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    // Please write your code here.
    int nx = 0;
    int d = 0;

    for (int i = 0; i < n; i++) {
        if (dir[i] == 'L') d = -1;
        else d = 1;

        for (int j = 0; j < x[i]; j++) {
            int idx = nx + offset;
            arr[idx] = d;

            if (j < x[i] - 1) nx += d;
        }
    }

    for (int i = 0; i < 200001; i++) {
        if (arr[i] == -1) color[0]++;
        else if (arr[i] == 1) color[1]++;
    }

    cout << color[0] << " " << color[1];

    return 0;
}