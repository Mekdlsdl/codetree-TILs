#include <iostream>
#include <vector>

using namespace std;

int n, m;
char d[1000];
int t[1000];
char d2[1000];
int t2[1000];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) cin >> d[i] >> t[i];

    for (int i = 0; i < m; i++) cin >> d2[i] >> t2[i];

    // Please write your code here.
    vector<int> s, s2;
    s.push_back(0);
    s2.push_back(0);
    int time1 = 0; int time2 = 0;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < t[i]; j++) {
            if (d[i] == 'L') time1--;
            else time1++;

            s.push_back(time1);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < t2[i]; j++) {
            if (d2[i] == 'L') time2--;
            else time2++;
            
            s2.push_back(time2);
        }
    }

    int ans = -1;
    for (int i = 1; i < s.size(); i++) {
        // cout << i << " - " << s[i] << " " << s2[i] << endl;
        if (s[i] == s2[i]) {
            ans = i;
            break;
        }
    }

    cout << ans;

    return 0;
}