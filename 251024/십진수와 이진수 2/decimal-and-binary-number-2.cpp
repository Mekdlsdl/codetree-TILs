#include <iostream>
#include <vector>

using namespace std;

string N;

int main() {
    cin >> N;
    int num = 0;

    // Please write your code here.
    for (int i = 0; i < N.length(); i++) {
        num = num * 2 + (N[i] - '0');
    }

    num *= 17;
    // cout << num << endl;

    vector<int> ans;

    while (true) {
        if (num <= 1) {
            ans.push_back(num);
            break;
        }

        ans.push_back(num % 2);
        num /= 2;
    }

    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i];
    }

    return 0;
}