class ArraysPartIV {
    public List<List<Integer>> fourSum(int[] nums, int T) {
        List<List<Integer>> ans = new ArrayList<>();
        // sanity check
        if(nums == null || nums.length == 0) return ans;
        
        final int N = nums.length;
        
        Arrays.sort(nums);
        
        for(int i = 0; i < N - 3; ++i) {
            if(i > 0 && nums[i - 1] == nums[i]) continue;
            for(int l = N - 1; l > i + 2; --l ) {
                if(l < N - 1 && nums[l + 1] == nums[l]) continue;
                
                int lo = i + 1, hi = l - 1;
                
                int target = T - nums[i] - nums[l];
                if(nums[lo] + nums[lo + 1] > target) continue; // min possible
                if(nums[hi] + nums[hi - 1] < target) break; // max possible
                while(lo < hi){
                    int sum = nums[lo] + nums[hi];
                    if(sum == target){
                        ans.add(Arrays.asList(nums[i], nums[lo], nums[hi], nums[l]));

                        ++lo;
                        --hi;

                        while(lo < hi && nums[lo - 1] == nums[lo]) ++lo;
                        while(lo < hi && nums[hi] == nums[hi + 1]) --hi;
                    }else if(sum > target){
                        --hi;
                    }else{
                        ++lo;
                    }
                }
            }
        }
        
        return ans;
    }
}