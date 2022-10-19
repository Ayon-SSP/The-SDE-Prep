class Solution {
public:
    string countAndSay(int n) {
        
        vector<string> ans(31);
        
        ans[0] = "1";
        
        for(int i=1;i<n;i++){
            string p="";
            
            int cnt = 1;
            
            for(int j=1;j<ans[i-1].length();j++){
                if(ans[i-1][j] == ans[i-1][j-1]) cnt++;
                else{
                    p+='0' + cnt;
                    p+=ans[i-1][j-1];
                    cnt=1;
                }
            }
            
            p+='0' + cnt;
            p+=ans[i-1][ans[i-1].length()-1];
            
            ans[i] = p;
        }
        
        return ans[n-1];
    }
};
