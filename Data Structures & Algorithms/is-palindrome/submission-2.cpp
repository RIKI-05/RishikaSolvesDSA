class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' and s[i]<='z')||(s[i]>='A' and s[i]<='Z')||(s[i]>='0' and s[i]<='9')){
                str+=tolower(s[i]);
            }
        }

        string str2 = str;
        reverse(str.begin(),str.end());
        if(str2 == str)return true;
        return false;
    }
};
