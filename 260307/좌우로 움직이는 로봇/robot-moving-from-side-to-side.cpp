#include <iostream>
#include <vector>

using namespace std;

int n, m;
int t[50000];
char d[50000];
int t_b[50000];
char d_b[50000];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> t[i] >> d[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> t_b[i] >> d_b[i];
    }

    // Please write your code here.

    vector<int> l, l_b;
    l.push_back(0);
    l_b.push_back(0);

    int idx = 0;
    int idx_b = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < t[i]; j++) {
            if (d[i] == 'L') l.push_back(l[idx] - 1);
            else l.push_back(l[idx] + 1);

            idx++;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < t_b[i]; j++) {
            if (d_b[i] == 'L') l_b.push_back(l_b[idx_b] - 1);
            else l_b.push_back(l_b[idx_b] + 1);

            idx_b++;
        }
    }


    int cnt = 0;
    int c = 0;

    for (int i = 0; i < l.size(); i++) {
        if (l[i] == l_b[i] && l[i] != c) {
            cnt++;
            c = l[i];
        }
    }

    cout << cnt;

    return 0;
}