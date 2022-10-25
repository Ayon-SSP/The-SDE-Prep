/* ~ Mohit.Kota */
class Solution {
public:
    void sortColors(vector<int>& arr) 
    {
        /* INSERTION SORT ALGORITHM APPROACH */
        // int n=nums.size();
        // for(int i=1;i<n;i++)
        // {
        //     int key=nums[i];
        //     int j=i-1;
        //     while(j>=0 && key<nums[j])
        //     {
        //         nums[j+1]=nums[j];
        //         j=j-1;
        //     }
        //     nums[j+1]=key;
        // }
        
        /* COUNT SORT ALGORITHM APPROACH */
        // vector<int>count(10,0);
        // for(int i=0;i<nums.size();i++)
        // {
        //     count[nums[i]]++;
        // }
        // int x=0;
        // for(int i=0;i<=9;i++)
        // {
        //     for(int j=0;j<count[i];j++)
        //     {
        //         nums[x]=i;
        //         x++;
        //     }
        // }
        
        int low = 0 ; 
        int mid = 0 ; 
        int high = arr.size()-1;
        while(mid<=high)
        {
            switch(arr[mid])
            {
                // if element is 0
                case 0: 
                    swap(arr[low++],arr[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(arr[mid],arr[high--]);
                    break;
            }
        }
    }
};
