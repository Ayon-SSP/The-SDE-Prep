/*
Binary Indexed Tree: It is a data structure that can efficiently update elements and calculate prefix sums in a table of numbers.

Uses:
- Find the prefix sum between a given range [l...r]

Complexity analysis:
getSum: O(logN)
update: O(logN)
getValue: O(logN)
rangeSum: O(logN)

Note: Assuming everything to be in zero-based indexing.
*/

#include <vector>
#include <iostream>

using namespace std;

class BIT {
private:
    vector<int> bit;
    int N;

public:

    BIT(int n, vector<int> &arr) {
        N = n+1;
        bit = vector<int> (N + 10, 0);
        for(int i = 0; i < N - 1; i++) update(i, arr[i]);
    }
    
    /*
    update: Add the value `val` to the index `x` in original array. Thus update the prefix sum.
    */
    void update(int x, int val) {
        int ind = x + 1;
        while(ind <= N) {
            bit[ind] += val;
            ind += ((ind) & (-ind));
        }
    }
    
    /*
    getSum: get the prefix sum till index `x`.
    */
    int getSum(int x) {

        if(x < 0) return 0;

        int ind = x;
        int sum = 0;

        while(ind > 0) {
            sum += bit[ind];
            ind -= ((ind) & (-ind));
        }

        return sum;
    }

    /*
    getValue: get the value of element present at index `x`
    */
    int getValue(int x) {
        return getSum(x) - getSum(x-1);
    }

    /*
    changeElem: change the value of element present at index `x` to `val`.
    */
    void changeElem(int x, int val) {
        update(x, val-getValue(x + 1));
    }
    
    /*
    rangeSum: get the sum of elements in range [l...r]
    */
    int rangeSum(int l, int r) {
        l++, r++;
        if(l == 1) {
            return getSum(r);   
        }
        return getSum(r) - getSum(l - 1);
    }

};

int main() {
    
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    BIT bit(n, arr);
    
    int index;
    cin >> index;
    
    // print the prefix sum till index `index`.
    cout << bit.getSum(index) << '\n';
    
    int l, r;
    cin >> l >> r;
    
    // print the range sum in range [l...r]
    cout << bit.rangeSum(l, r) << '\n';
}