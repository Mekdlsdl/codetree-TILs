#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a1, a2, a3;
    cin >> a1 >> a2;
    cout << a1 << " " << a2 << " ";

    for (int i = 0; i < 8; i++) {
        a3 = a1 + a2;
        if (a3 >= 10) a3 %= 10;
        cout << a3 << " ";

        a1 = a2;
        a2 = a3;
    }
    
    return 0;
}