#include <iostream>
using namespace std;

int main() {
    int n, cnt;
    cin >> n; 
    cnt = 65;

    for (int i=0; i<n; i++) {
        for (int j=0; j<i; j++) {
            cout << "  ";
        }
        for (int k=n-i; k>0; k--) {
            char ch(cnt);
            cout << ch << " ";
            cnt++;

            if (cnt == 91) {
                cnt = 65;
            }
        }
        cout << endl;
    }
    return 0;
}