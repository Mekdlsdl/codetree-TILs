#include <iostream>
#include <map>

using namespace std;

int n;
char dir[100];
int dist[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
    }

    // Please write your code here.
    map<char, int> m = {{'N', 0}, {'E', 1}, {'S', 2}, {'W', 3}};
    int dx[4] = { 0, 1, 0, -1 }, dy[4] = { 1, 0, -1, 0 };
    int x = 0, y = 0;

    for (int i = 0; i < n; i++) {
        char d = dir[i];
        int t = dist[i];

        x = x + dx[m[d]] * t;
        y = y + dy[m[d]] * t;

        // cout << x << " " << y << endl;
    }

    cout << x << " " << y;

    return 0;
}