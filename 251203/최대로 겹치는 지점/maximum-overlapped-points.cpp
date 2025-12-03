#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];
int arr[101] = {0};

int ans = 0;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        int num1 = x1[i];
        int num2 = x2[i];

        for (int j = num1; j <= num2; j++) {
            arr[j]++;

            ans = max(ans, arr[j]);
        }
    }
    
    cout << ans;

    return 0;
}