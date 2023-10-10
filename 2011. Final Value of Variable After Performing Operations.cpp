class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        int n=operations.size();
        while(n--)
        {
            if(operations[n]=="--X") --x;
            else if(operations[n]=="X--")x--;
            else if(operations[n]=="X++")x++;
            else if(operations[n]=="++X")++x;
        }
        return x;
    }
};