class Solution {
public:
    bool stoneGame(vector<int>& piles) {

        int sum=0;
        for(int i=0;i<piles.size();i++){
            sum+=piles[i];
        }
        if(sum%2!=0) return true;
        return false;
    }
};
