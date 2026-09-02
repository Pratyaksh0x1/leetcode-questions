class Solution {
public:
    string reverseVowels(string s) {
        int left=0;
        int right=s.length()-1;
        while(left<right){
            if((s[left]=='a'||s[left]=='A'||s[left]=='e'||s[left]=='E'||s[left]=='i'||s[left]=='I'
            ||s[left]=='o'||s[left]=='O'||s[left]=='U'||s[left]=='u')&&(s[right]=='a'||s[right]=='A'||s[right]=='e'||s[right]=='E'||s[right]=='i'||s[right]=='I'||s[right]=='o'||s[right]=='O'||s[right]=='U'||s[right]=='u')){
                swap(s[left],s[right]);
                left++;
                right--;
            }else if(s[right]!='a'&&s[right]!='A'&&s[right]!='e'&&s[right]!='E'&&s[right]!='i'&&s[right]!='I'&&s[right]!='o'&&s[right]!='O'&&s[right]!='U'&&s[right]!='u'){
                right--;
            }else{
                left++;
            }
        }
        return s;
    }
};