class Solution {
public:
    int subArray(vector<int>& N, int k) { //nums=N
        int count = 0, ans = 0, start = 0, end = 0;
        int n = N.size();
        while(end<n){
            if(N[end]%2==1){
                count++;
            }
            while(count>k){
                if(N[start]%2==1){
                    count--;
                }
                start++;
            }
            ans += end-start+1;
            end++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& N, int k) {
      return subArray(N, k) - subArray(N, k - 1);
    }
};