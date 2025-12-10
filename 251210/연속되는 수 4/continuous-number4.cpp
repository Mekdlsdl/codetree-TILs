#include <iostream>

using namespace std;

int N;
int arr[1000];

int ans = 0;

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.

    int before = 0;
    int cnt = 0;

    for (int i = 0; i < N; i++) {
        int num = arr[i];

        if (num <= before) cnt = 1;
        else cnt++;

        ans = max(ans, cnt);
        before = num;
    }

    cout << ans;

    return 0;
}