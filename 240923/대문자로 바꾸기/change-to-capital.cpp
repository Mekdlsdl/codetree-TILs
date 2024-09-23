#include <iostream>

using namespace std;

int main() {
    char arr[5][3];

    for (int i=0; i<5; i++) {
        for (int j=0; j<3; j++) {
            cin >> arr[i][j];
        }
    }

    for (int k=0; k<5; k++) {
        for (int l=0; l<3; l++) {
            printf("%c ", toupper(arr[k][l]));
        }
        cout << endl;
    }
    
    return 0;
}