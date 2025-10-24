#include <iostream>
#include <vector>

using namespace std;

int n;

int main() {
    cin >> n;

    // Please write your code here.
    vector<int> ans;

    while (true) {
        if (n <= 1) {
            ans.push_back(n);
            break;
        }

        ans.push_back(n % 2);
        n /= 2;
    }

    for (int j = ans.size() - 1; j >= 0; j--) {
        cout << ans[j];
    }

    return 0;
}