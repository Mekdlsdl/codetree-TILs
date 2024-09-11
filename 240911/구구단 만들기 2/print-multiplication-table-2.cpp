#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int j=2; j<=8; j+=2) {
        for (int i=b; i>=a; i--) {
            cout << i << " * " << j << " = " << i*j;
            if (i != a) {
                cout << " / ";
            }
        }
        cout << endl;
    }
    return 0;
}