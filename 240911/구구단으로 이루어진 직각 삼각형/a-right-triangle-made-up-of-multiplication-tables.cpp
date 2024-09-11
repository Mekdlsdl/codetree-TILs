#include <iostream>
using namespace std;

int main() {
    int n, cnt;
    cin >> n;

    cnt = n;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=cnt; j++) {
            cout << i << " * " << j << " = " << i * j;

            if (j != cnt) {
                cout << " / ";
            }
        }
        cnt--;
        cout << endl;
    }
    return 0;
}