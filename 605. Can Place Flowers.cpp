class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int sum=0;
        int x=0;
        int y=0;
        if(n<1){return 1;}
        else
        {
                if(f.size()==1)
        {
            if((f[0]==0 && n<=1)) return 1;
            else return 0;
        }
        else if(f.size()==2)
        {
            if((f[0]==0 && f[1]==0 && n<=1)) return 1;
            else return 0;
        }
        if(f[0]==0 && f[1]==0)
        {
            sum++;
            x++;
        }
        if(f[f.size()-1]==0 && f[f.size()-2]==0)
        {
            sum++;
            y++;
        }
        for(int i=1+x;i<f.size()-(y+1);i++)
        {
            if(f[i-1]+f[i]+f[i+1]==0) 
            {
                sum++;
                i++;
            }
        }
        return (sum>=n);
        }
    }
};