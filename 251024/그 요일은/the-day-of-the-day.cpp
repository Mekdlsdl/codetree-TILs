#include <iostream>

using namespace std;

int m1, m2, d1, d2;
string A;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    // Please write your code here.
    int days[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    string week[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    int w, tw, cnt;
    w = 1; cnt = 0;

    for (int i = 0; i < 7; i++) {
        if (week[i] == A) {
            tw = i;
            break;
        }
    }

    while (true) {
        if (m1 == m2 && d1 == d2) break;

        d1++;
        w++;

        if (d1 > days[m1]) {
            d1 = 1;
            m1++;
        }

        if (w > 6) w = 0;

        if (w == tw) cnt++;
    }

    cout << cnt;
    
    return 0;
}