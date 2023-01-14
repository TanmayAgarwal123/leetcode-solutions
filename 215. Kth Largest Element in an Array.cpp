class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        map<int,int>mapp;

        for(int i=0;i<nums.size();i++){
            mapp[nums[i]]++;
        }
         map<int, int>::reverse_iterator it;
         int sum=0;
        for( it=mapp.rbegin();it!=mapp.rend();it++){
           sum+=it->second;
           if(sum>=k){
               return it->first;
           }
        }
        return -1;
    }
};