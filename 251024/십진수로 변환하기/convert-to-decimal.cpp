#include <iostream>
#include <cstring>

using namespace std;

char binary[9];

int main() {
    cin >> binary;
    int num = 0;

    // Please write your code here.
    for (int i = 0; i < strlen(binary); i++) {
        // cout << num << " = " << (num * 2) << " + " << binary[i] << endl;
        num = (num * 2) + (binary[i] - '0');
    }

    cout << num;

    return 0;
}