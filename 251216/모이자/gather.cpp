#include <iostream>

using namespace std;

int n;
int A[100];

int ans = 250001;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    for (int i = 1; i < n + 1; i++) {
        int d = 0;

        for (int j = 1; j < n + 1; j++) {
            if (j != i) {
                d += (abs(j - i) * A[j - 1]);
            }
        }

        ans = min(ans, d);
    }

    cout << ans;

    return 0;
}