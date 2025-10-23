#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};

    char c;
    cin >> c;

    int cnt = 0;

    for (int i = 0; i < sizeof(arr)/sizeof(string); i++) {
        if (arr[i][2] == c || arr[i][3] == c) {
            cnt++;
            cout << arr[i] << endl;
        }
    }

    cout << cnt;

    return 0;
}