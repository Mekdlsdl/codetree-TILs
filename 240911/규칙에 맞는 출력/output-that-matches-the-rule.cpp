#include <iostream>
using namespace std;

int main() {
    int n, cnt;
    cin >> n;

    for (int i=n; i>=1; i--) {
        cnt = i;
        while (cnt <= n) {
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }
    return 0;
}