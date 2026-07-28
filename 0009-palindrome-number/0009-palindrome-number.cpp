class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int rev=0,rem;
        int orginal =x;
        while(x>0)
        {
            rem=x%10;
              if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
                return 0;
            rev=(rev*10)+rem;
            x/=10;
        }
        if (orginal==rev)
        return true ;
        else 
        return false;
    }
};