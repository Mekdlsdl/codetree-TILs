#include <iostream>
using namespace std;

int main() {
    int c = 13;
    float g = 0.165;

    cout << fixed;

    cout.precision(6);
    cout << c << " * " << g << " = " << c * g;
    return 0;
}