#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int num, sum;

    sum = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> num;

            if (j <= i) sum += num;
        }
    }

    cout << sum;
    
    return 0;
}