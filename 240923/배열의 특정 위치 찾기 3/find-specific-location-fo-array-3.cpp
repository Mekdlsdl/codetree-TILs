#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int mark;
    int ans = 0;

    for (int i=0; i<100; i++) {
        cin >> arr[i];

        if (arr[i] == 0) {
            mark = i;
            break;
        }
    }

    for (int j=mark-1; j>mark-4; j--) {
        ans += arr[j];
    }

    cout << ans;

    return 0;
}