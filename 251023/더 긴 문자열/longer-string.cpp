#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s1, s2;
    cin >> s1 >> s2;

    int n1 = s1.length();
    int n2 = s2.length();


    if (n1 > n2) cout << s1 << " " << n1;
    else if (n2 > n1) cout << s2 << " " << n2;
    else cout << "same";

    return 0;
}