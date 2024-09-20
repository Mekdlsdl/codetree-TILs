#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b;

    cout << a << " " << b;

    for (int i=0; i<8; i++) {
        c = a * 2 + b;
        cout << " " << c;

        a = b;
        b = c;
    }
    
    return 0;
}