#include <iostream>
#include <algorithm>

using namespace std;

int A, B, C;
int ans = 0;

void Choose(int num) {
    if ((num + A) > C || (num + B) > C) {
        ans = max(ans, num);
        return;
    }

    Choose(num + A);
    Choose(num + B);
}

int main() {
    cin >> A >> B >> C;

    Choose(0);
    cout << ans;

    return 0;
}