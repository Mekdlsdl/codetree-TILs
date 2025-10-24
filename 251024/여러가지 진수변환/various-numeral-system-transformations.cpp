#include <iostream>
#include <vector>

using namespace std;

int N, B;

int main() {
    cin >> N >> B;
    vector<int> ans;

    // Please write your code here.
    while (true) {
        if (N < B) {
            ans.push_back(N);
            break;
        }

        ans.push_back(N % B);
        N /= B;
    }

    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i];
    }

    return 0;
}