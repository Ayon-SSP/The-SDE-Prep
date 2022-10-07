class LongestConsecutiveSequence {
    public int maxLen(int A[], int n) {
        HashMap<Integer, Integer> hm = new HashMap<Integer, Integer>();
        int maxi = 0;
        int sum = 0; 

        for(int i = 0; i < n; i++) {
            sum += A[i]; 

            if(sum == 0) {
                maxi = i + 1; 
            }
            else {
                if(hm.get(sum) != null) {
                    maxi = Math.max(maxi, i - hm.get(sum)); 
                }
                else {
                    hm.put(sum, i); 
                }
            }
        }
        
        return maxi; 
    }
}