#include <iostream>
#include <string>

using namespace std;

string A;

int n;
int ans = 0;

int main() {
    cin >> A;

    n = A.length();

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        if (A[i] == '(') {
            for (int j = i; j < n; j++) {
                if (A[j] == ')') ans++;
            }
        }
    }

    cout << ans;

    return 0;
}