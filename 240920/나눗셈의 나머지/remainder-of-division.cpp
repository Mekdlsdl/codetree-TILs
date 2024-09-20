#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a, b;
    int ans = 0;
    cin >> a >> b;

    vector<int> remains(a);

    while (a >= 1) {
        remains[a % b] += 1;
        a = a / b;
    }

    for (int i=0; i<remains.size(); i++) {
        ans += (remains[i] * remains[i]);
    }

    cout << ans;
    return 0;
}