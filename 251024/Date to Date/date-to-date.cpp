#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    // Please write your code here.
    int day = 0;
    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (true) {
        if (m1 == m2 && d1 == d2) break;

        d1++;
        day++;

        if (days[m1] == d1) {
            d1 = 0;
            m1++;
        }
    }

    cout << day;

    return 0;
}