#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;

    int sum = a + b + c;
    int aver = sum / 3;

    cout << sum << "\n";
    cout << aver << "\n";
    cout << sum - aver;
    
    return 0;
}