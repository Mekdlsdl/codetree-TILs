#include <iostream>
#include <vector>

using namespace std;

int N, M;
int v[1000], t[1000];
int v2[1000], t2[1000];

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) cin >> v[i] >> t[i];

    for (int i = 0; i < M; i++) cin >> v2[i] >> t2[i];

    // Please write your code here.
    // 1, 2 / 6 / 7 / 9, 11, 13, 15, 17, 19, 21, 23, 25, 27

    vector<int> r1, r2;

    r1.push_back(0);
    r2.push_back(0);

    int idx1 = 0;
    int idx2 = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < t[i]; j++) {
            r1.push_back(r1[idx1] + v[i]);
            idx1++;
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < t2[i]; j++) {
            r2.push_back(r2[idx2] + v2[i]);
            idx2++;
        }
    }
    

    int first = r1[1] >= r2[1] ? 0 : 1;
    int cnt = 0;

    for (int i = 0; i < r1.size(); i++) {
        if (r1[i] > r2[i] && first != 0) {
            first = 0;
            cnt++;
        }
        else if (r1[i] < r2[i] && first != 1) {
            first = 1;
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}