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

    
    int s = l.size();
    int s_b = l_b.size();

    if (s > s_b) {
        for (int i = 0; i < s - s_b; i++) {
            l_b.push_back(l_b[s_b - 1]);
        }
    }
    else if (s < s_b) {
        for (int i = 0; i < s_b - s; i++) {
            l.push_back(l[s - 1]);
        }
    }


    int cnt = 0;
    bool e = true;

    for (int i = 0; i < l.size(); i++) {
        // cout << l[i] << " " << l_b[i] << '\n';

        if (l[i] == l_b[i] && !e) {
            cnt++;
            // cout << "here" << '\n';
            e = true;
        }
        else if (l[i] != l_b[i]) e = false;
    }

    cout << cnt;

    return 0;
}