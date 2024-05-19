class Solution {
public:

    void func(vector<int>& a, int target, int i, int sum, int n, vector<int> same, set<vector<int>> &ans) 
        {
        if(sum == target)
        {
            ans.insert(same);
            return;
        }    
        if(sum > target || i == n) 
            return;
        
		//dont want to take the current element

        func(a,target,i+1,sum,n,same,ans);
        
        sum += a[i];
        same.push_back(a[i]);
        
		//if we want to take the element again

        func(a,target,i,sum,n,same,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& a, int target) {

        set<vector<int>> ans;
        vector<int> same;
        sort(a.begin(), a.end());
        func(a, target, 0, 0, a.size(), same, ans);
        vector<vector<int>> ans1;
        ans1.assign(ans.begin(), ans.end());
        return ans1;
    }
};