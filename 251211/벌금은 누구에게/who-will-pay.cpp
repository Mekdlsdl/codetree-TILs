#include <iostream>

using namespace std;

int N, M, K;
int student[10000];
int penalty[101] = {0};

int ans = -1;

int main() {
    cin >> N >> M >> K;

    for (int i = 0; i < M; i++) {
        cin >> student[i];
    }

    // Please write your code here.

    for (int i = 0; i < M; i++) {
        int s = student[i];
        penalty[s]++;

        if (penalty[s] >= K) {
            ans = s;
            break;
        }
    }

    cout << ans;
    
    return 0;
}