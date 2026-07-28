class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int a=0;
        int b=numbers.size()-1;
        vector<int>arr;
        while(a<=b){
            if(numbers[a]+numbers[b]==target){
                arr.push_back(a+1);
                arr.push_back(b+1);
                return arr;
            }
            else if(numbers[a]+numbers[b]<target){
                a++;
            
            }else{
                b--;
            }
        }
       

         
        return {};
    }
};