/* ~Mohit Kota */
class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        vector<int>temp = nums;
        int n=nums.size();
        // first traverse from right most element and compare its previous one 
        int index;
        for(int i=n-1;i>=1;i--)
        {
            if(nums[i-1]<nums[i]) //comparing current index with the previous one 
            {
                index=i-1; // storing its previous index 
                break;
            }
        }
        
        for(int i=n-1;i>index;i--) 
        {
            if(nums[index]<nums[i])
            {
                swap(nums[index],nums[i]);
                sort(nums.begin()+index+1,nums.end());
                break;
            }
        }
        if(temp==nums)
        {
            reverse(nums.begin(),nums.end());
        }
        // bool val = next_permutation(nums.begin(),nums.end());
        // if(val==false)
        // {
        //     return;
        
        // }
        
       
    }
};
