#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    string nums;
    vector<int> numList;
    numList.clear();

    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> nums;

        if (stoi(nums) % 2 == 0) {
            numList.push_back(stoi(nums));
        }
        
    }
    
    for (int i=numList.size()-1; i>=0; i--) {
        cout << numList[i] << " ";
    }

    return 0;
}