#include <iostream>

using namespace std;

int N;
int arr[1000];

int ans = 0;
bool chk = true; // true = 0보다 큼, false = 0보다 작음

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int cnt = 0;

    for (int i = 0; i < N; i++) {
        int num = arr[i];

        if ((chk && num < 0) || (!chk && num > 0)) {
            ans = max(ans, cnt);
            cnt = 1;
            chk = (num > 0) ? true : false;
        }
        else {
            cnt++;
        }
    }

    cout << ans;

    return 0;
}