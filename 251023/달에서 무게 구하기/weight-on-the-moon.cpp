#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sinker = 13;
    float g = 0.165f;
    float r = sinker * g;

    cout << fixed;
    cout.precision(6);

    cout << sinker << " * " << g << " = " << r;
    return 0;
}