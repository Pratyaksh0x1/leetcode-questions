class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int count=0;
        int sum=0;
        for(int i=0;i<k;i++){
            sum=sum+arr[i];
            
        }
        if((sum/k)>=threshold){
                count+=1;
            }
         for(int i=k;i<n;i++){
            sum=sum+arr[i]-arr[i-k];
            if((sum/k)>=threshold){
                count+=1;
            }
        }
        return count;
        
    }
};