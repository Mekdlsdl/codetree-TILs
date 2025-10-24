#include <iostream>
#include <vector>

using namespace std;

int a, b;
string n;

int main() {
    cin >> a >> b;
    cin >> n;

    int num = 0;
    vector<int> ans;

    // Please write your code here.
    for (int i = 0; i < n.length(); i++) {
        num = num * a + (n[i] - '0');   
    }


    while (true) {
        if (num < b) {
            ans.push_back(num);
            break;
        }

        ans.push_back(num % b);
        num /= b;
    }

    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i];
    }

    return 0;
}