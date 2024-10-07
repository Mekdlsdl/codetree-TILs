#include <iostream>
using namespace std;

int main() {
    int arr[2][4];
    int sum = 0;

    for (int i=0; i<2; i++) {
        for (int j=0; j<4; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }

    for (int i=0; i<2; i++) {
        int ans = 0;

        for (int j=0; j<4; j++) {
            ans += arr[i][j];
        }

        printf("%.1f ", (float)ans/4);
    }

    cout << endl;

    for (int i=0; i<4; i++) {
        int ans = 0;

        for (int j=0; j<2; j++) {
            ans += arr[j][i];
        }

        printf("%.1f ", (float)ans/2);
    }

    printf("\n%.1f ", (float)sum/8);

    return 0;
}