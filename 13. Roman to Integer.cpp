class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char , int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X']= 10;
        mp['L']= 50;
        mp['C']= 100;
        mp['D']= 500;
        mp['M']= 1000;
        
        int ans = 0;
        int n = s.size();
        int prev = mp[s[n-1]];
        ans = ans + prev;
        
        for(int i = n-2; i >= 0 ; i--){
            int temp = mp[s[i]];
            if(temp >= prev)
                ans = ans + temp;
            else
                ans = ans - temp;
            
            prev = temp;
        }
        return ans;
    }
};