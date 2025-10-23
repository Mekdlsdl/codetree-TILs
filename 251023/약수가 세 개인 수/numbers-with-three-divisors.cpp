#include <iostream>

using namespace std;

int st, ed;

int main() {
    cin >> st >> ed;
    int total = 0;

    // Please write your code here.
    for (int i = st; i <= ed; i++) {
        int cnt = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) cnt++;
        }

        if (cnt == 3) total++;
    }

    cout << total;

    return 0;
}
