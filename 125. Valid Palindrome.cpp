class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        string reverseStr;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0;i<s.size();i++){
            if((s[i]>64 and s[i]<=90) or (s[i]>96 and s[i]<=122) or (s[i]>47 and s[i]<=57)){
                str += s[i];
            }
        }
        reverseStr = str;
        reverse(reverseStr.begin(), reverseStr.end());

        if(reverseStr == str) return true;

        return false;
    }
};