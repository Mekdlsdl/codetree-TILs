#include <iostream>
using namespace std;

int main() {
    int arr[4][4];

    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            cin >> arr[i][j];
        }
    }

    for (int k=0; k<4; k++) {
        int sum = 0;

        for (int l=0; l<4; l++) {
            sum += arr[k][l];
        }

        cout << sum << endl;
    }
    return 0;
}