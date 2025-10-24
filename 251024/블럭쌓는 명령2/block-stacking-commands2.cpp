#include <iostream>
#include <cmath>

using namespace std;

int N, K;
int A[100], B[100];

int main() {
    cin >> N >> K;
    
    int arr[N + 1] = {0};

    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];

        for (int j = A[i]; j <= B[i]; j++) {
            arr[i]++;
        }
    }

    // Please write your code here.
    int m = 0;

    for (int i = 1; i <= N; i++) {
        m = max(m, arr[i]);
    }

    cout << m;

    return 0;
}