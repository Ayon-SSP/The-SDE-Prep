/*
Problem: Subset sum

TC: O(2^N) + O(2^n log(2^n)
SC: O(2^N)
*/

#include <iostream>
#include <vector>

using namespace std;

void subsetSum(int pos, vector<int> &arr, vector<int> &sums, int currentSum) {
    if(pos == arr.size()) {
        sums.push_back(currentSum);
        return;
    }
    
    // take the current element
    subsetSum(pos + 1, arr, sums, currentSum + arr[pos]);
    
    // skip the current element
    subsetSum(pos + 1, arr, sums, currentSum);
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<int> sums;
    subsetSum(0, arr, sums, 0);
    
    for(int res : sums) {
        cout << res << ' ';
    }
}