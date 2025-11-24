#include <iostream>
#include <algorithm>

using namespace std;

int A, B, C;
int ans = 0;
bool visited[1001] = {false};

void Choose(int num) {
    if (num > C) return;

    if (visited[num]) return;
    visited[num] = true;
    
    ans = max(ans, num);
    

    Choose(num + A);
    Choose(num + B);
}

int main() {
    cin >> A >> B >> C;

    Choose(0);
    cout << ans;

    return 0;
}