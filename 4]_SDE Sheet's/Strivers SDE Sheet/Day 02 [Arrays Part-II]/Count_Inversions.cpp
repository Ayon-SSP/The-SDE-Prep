// This solution is for the Code Studio problem
#include <bits/stdc++.h> 

int merge(int arr[], int temp[], int left, int mid, int right) {
    int cnt = 0;
    int i = left, j = mid, k = left;
  
    while (i <= mid - 1 && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[i++];
            cnt += (mid - i);
            
        }
    }
    
    while (i <= mid - 1) {
        temp[k++] = arr[i++];
    }
    
    while (j <= right) 
        temp[k++] = arr[j++];
    
    for (int z = left; z <= right; z++) {
        arr[z] = temp[z];
    }
    
    return cnt;
}

int mergeSort(int arr[], int temp[], int left, int right) {
    int mid, inv_count = 0;
    
    if (right > left) {
        
        mid = (left + right) / 2;
        
        inv_count += mergeSort(arr, temp, left, mid);
        inv_count += mergeSort(arr, temp, mid + 1, right);
        inv_count += merge(arr, temp, left, mid + 1, right);
        
    }
    
    return inv_count;
    
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    int temp[n];
    int ans = mergeSort(arr, temp, 0, arr.size() - 1);
    return ans;
    
}