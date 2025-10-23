#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;

    s[1] = 'a';
    s[s.length() - 2] = 'a';

    cout << s;

    return 0;
}