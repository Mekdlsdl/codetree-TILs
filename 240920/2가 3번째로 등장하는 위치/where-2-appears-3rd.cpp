#include <iostream>
using namespace std;

int main() {
    int n, num;
    int cnt = 0;

    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> num;

        if (num == 2) {
            cnt += 1;
        }

        if (cnt == 3) {
            cout << i+1;
            break;
        }
    }
    return 0;
}