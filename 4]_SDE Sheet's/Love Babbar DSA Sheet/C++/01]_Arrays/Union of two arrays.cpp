class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        
       int ans = 0 ;
       
       // Taking data structure to put the a[] and b[] value
       vector<int> v;
        for( int k=0 ;k< m ;k++)
            v.push_back(b[k]);
         
        for ( int i =0 ; i < n ;i++)
             v.push_back(a[i]);
            
        // Sort the vector    
        sort(v.begin(),v.end());
        
        // Since after sorting, duplicate element are contiguous, they can easily ignored by following algo
        for( int i =0 ;i < v.size(); i++ )
        {
            if(v[i]==v[i+1])
                continue;
            ans++;
        }
        return ans;
    }
};

// Time Complexity : O((n+m)log(n+m))  
// Auxilliary Space : O(n+m)
