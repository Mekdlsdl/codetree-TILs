#include <iostream>
#include <map>
#include <climits>

using namespace std;

string expression;

map<char, int> alpha;
int selected[101];

int n;
int ans = INT_MIN;


void Calculate() {
    int result = 0;
    char op = '+';

    for (int i = 0; i < expression.size(); i++) {
        if (i % 2 == 1) continue;

        switch (op) {
            case '+':
                result += alpha[expression[i]];
                break;
            case '-':
                result -= alpha[expression[i]];
                break;
            case '*':
                result *= alpha[expression[i]];
                break;
        }

        if (i + 1 < expression.size()) {
            op = expression[i + 1];
        }
    }

    ans = max(result, ans);
}

void Choose(int cnt) {
    if (cnt == alpha.size()) {
        int idx = 0;

        for (auto& k : alpha) {
            alpha[k.first] = selected[idx];
            idx++;
        }

        Calculate();

        return;
    }

    for (int i = 1; i <= 4; i++) {
        selected[cnt] = i;
        Choose(cnt + 1);
    }
}

int main() {
    cin >> expression;

    n = expression.size();

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            alpha[expression[i]] = 0;
        }
    }

    Choose(0);

    cout << ans;

    return 0;
}
