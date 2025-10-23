#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;
    int time = 0;

    // Please write your code here.
    while (true) {
        if (a == c && b == d) break;
        
        b++;
        time++;

        if (b == 60) {
            b = 0;
            a++;
        }
    }

    cout << time;

    return 0;
}