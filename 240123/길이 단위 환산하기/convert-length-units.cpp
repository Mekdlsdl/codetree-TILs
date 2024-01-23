#include <iostream>
using namespace std;

int main() {
    float ft1 = 30.48f;
    float ft;

    cin >> ft;

    cout << fixed;
    cout.precision(1);
    cout << ft * ft1;
    
    return 0;
}