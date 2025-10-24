#include <iostream>
#include <cmath>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int ans = 0;
    int cnt = 0;

    for (int i = 0; i < N; i++) {
        cnt++;

        if (i == 0 || arr[i - 1] != arr[i]) {
            cnt = 1;
        }
        
        ans = max(ans, cnt);
    }

    cout << ans;

    return 0;
}