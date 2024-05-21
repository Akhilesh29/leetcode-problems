class Solution {
public:

    void solve(vector<vector<int>>&ans,vector<int>output,vector<int>&nums,int index){
        

        if(index==nums.size()){ // base condition
            ans.push_back(output);
            return;
        }

        solve(ans,output,nums,index+1);


        output.push_back(nums[index]); // curr index include karne par
        solve(ans,output,nums,index+1);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>output;
        int index=0;
        vector<vector<int>>ans;
        solve(ans,output,nums,index);
        return ans;
    }
};