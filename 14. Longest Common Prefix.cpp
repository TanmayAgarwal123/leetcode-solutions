class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string s = str[0];
        for(int i=1;i<str.size();i++) {
            int k = 0;
            int j = 0;
            while(k < s.size() || j < str[i].size()) {
                if(s[k] == str[i][j]) {
                    k++;
                    j++;
                }
                else {
                    s = str[i].substr(0, j);
                    break;
                }
            }
        }
        return s;
    }
};