class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<int> ans(2);
        vector<tuple<float,int,int>> res;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                float a=arr[i]/(arr[j]*1.0);
                res.push_back(make_tuple(a,arr[i],arr[j]));
            }
        }
        sort(res.begin(),res.end());
        ans[0]=get<1>(res[k-1]);
        ans[1]=get<2>(res[k-1]);
        return ans;
    }
};