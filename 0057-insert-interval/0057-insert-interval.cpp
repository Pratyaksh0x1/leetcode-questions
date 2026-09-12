class Solution {
public:
 vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        int start=intervals[0][0];
        int end=intervals[0][1];
        int i;
        for(i=1;i<n;i++)
        {
            int s=intervals[i][0];
            int e=intervals[i][1];

            if(end>=s) 
            {
                end=max(end,e);
                continue;
            }
         
            res.push_back({start,end});
            start=s;
            end=e;
        }
        res.push_back({start,end});
        return res;

    }
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size();
        vector<vector<int>> a;
        for(int i=0;i<n;i++){
              a.push_back(intervals[i]);
        }
        a.push_back(newInterval);
        return merge(a);
    }
};