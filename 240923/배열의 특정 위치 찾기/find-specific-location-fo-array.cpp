#include <iostream>
using namespace std;

int main() {
    int arr[11];

    int sum_e = 0;
    int sum_t = 0;
    int cnt_t = 0;

    int num;

    for (int i=1; i<11; i++) {
        cin >> arr[i];
    }

    for (int j=1; j<11; j++) {
        if (j % 2 == 0) {
            sum_e += arr[j];
        }

        if (j % 3 == 0) {
            sum_t += arr[j];
        }
    }

    printf("%d %.1f", sum_e, sum_t/3.0f);
    return 0;
}