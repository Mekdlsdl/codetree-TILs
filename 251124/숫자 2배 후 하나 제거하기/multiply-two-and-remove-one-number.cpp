#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int n;
int arr[100];
int selected[2] = {0};

int ans = INT_MAX;

void Simulration() {
    int sum = 0;
    int temp[n] = {0};
    vector<int> nums;

    int n1 = selected[0];
    int n2 = selected[1];
    
    for (int i = 0; i < n; i++) {
        if (i == n2) {
            temp[i] = 0;
        }
        else {
            temp[i] = arr[i];

            if (i == n1) temp[i] *= 2;

            nums.push_back(temp[i]);
        }
    }

    int num = nums[0];
    // cout << num << " ";
    for (int i = 1; i < n - 1; i++) {
        // cout << nums[i] << " ";
        sum += abs(num - nums[i]);
        num = nums[i];
    }
    // cout << '\n';
    ans = min(ans, sum);
}

void Choose(int cnt) {
    if (cnt == 2) {
        // cout << selected[0] << " " << selected[1] << '\n';
        Simulration();
        return;
    }

    for (int i = 0; i < n; i++) {
        selected[cnt] = i;
        Choose(cnt + 1);
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    Choose(0);
    cout << ans;

    return 0;
}