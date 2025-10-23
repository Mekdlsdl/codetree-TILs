#include <iostream>

using namespace std;

int a, b, c;

int main() {
    // a = day, b = hour, c = minute
    cin >> a >> b >> c;

    int d = 11;
    int h = 11;
    int m = 11;

    int time = 0;

    // Please write your code here.
    while (true) {
        if ((d == a) && ((h == b && m > c) || (h > b))) {
            time = -1;
            break;
        }

        if (d == a && h == b && m == c) break;

        m++;
        time++;

        if (m == 60) {
            m = 0;
            h++;
        }

        if (h == 24) {
            h = 0;
            d++;
        }
    }

    cout << time;

    return 0;
}