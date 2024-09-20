#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string num;
    string strs;
    string str;

    getline(cin, strs);
    istringstream ist(strs);

    while (getline(ist, str, ' ')) {
        if (stoi(str) % 3 == 0) {
            cout << num;
            break;
        }
        num = str;
    }
    return 0;
}