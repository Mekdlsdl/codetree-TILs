#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int num;
            cin >> num;

            arr[i][j] = num;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] * 3 << " ";
        }
        cout << endl;
    }
    return 0;
}