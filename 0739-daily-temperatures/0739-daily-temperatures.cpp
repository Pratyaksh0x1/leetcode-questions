class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
     stack<int>st;
     int n=temperatures.size();
     vector<int>res(n,0);
     for(int i=0;i<n;i++){
        while(!st.empty()&&temperatures[st.top()]<temperatures[i]){
            int days = st.top();
            res[days] = i - days;
            st.pop();
        }
        st.push(i);      
     }
     return res;   
    }
};