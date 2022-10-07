class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merged_Intervals;
        if (intervals.size() == 0) {
            return merged_Intervals;
        }
        
        sort(intervals.begin(), intervals.end());
        vector<int> temp_Interval = intervals[0];
        
        for (auto it: intervals) 
        {
            if (it[0] <= temp_Interval[1])
            {
                temp_Interval[1] = max(it[1], temp_Interval[1]);
            }
            else
            {
                merged_Intervals.push_back(temp_Interval);
                temp_Interval = it;
            }
        }
        
        merged_Intervals.push_back(temp_Interval);
        return merged_Intervals;
        
    }
};