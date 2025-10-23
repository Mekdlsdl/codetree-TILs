#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;

    while (true) {
        cin >> n;

        if (n < 25) cout << "Higher" << endl;
        else if (n > 25) cout << "Lower" << endl;
        else {
            cout << "Good";
            break;
        } 
    }

    return 0;
}