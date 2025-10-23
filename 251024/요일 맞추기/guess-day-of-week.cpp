#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    // Please write your code here.
    int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    string week[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    int w = 1;

    if (m1 > m2) {
        while (true) {
            if (m1 == m2 && d1 == d2) break;

            d1--;
            w--;

            if (d1 < 1) {
                m1--;
                d1 = days[m1];
            }

            if (w < 0) w = 6;

            // cout << m1 << " / " << d1 << " - " << w << endl;
        }
    }
    else if (m1 < m2) {
        while (true) {
            if (m1 == m2 && d1 == d2) break;

            d1++;
            w++;

            if (d1 > days[m1]) {
                d1 = 1;
                m1++;
            }

            if (w > 6) w = 0;

            // cout << m1 << " / " << d1 << " - " << w << endl;
        }
    }
    else {
        w += (d2 - d1);

                if (w < 0) {
                    w = (w + 7) % 6;
                }
    }

    cout << week[w];

    return 0;
}