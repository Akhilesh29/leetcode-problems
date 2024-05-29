class Solution {
public:
    int btd(string str){
        int num=stoull(str,0,2);
        return num;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        int tot=pow(2,n);
        unordered_set<int>s;
        for(string e: nums){
            s.insert(btd(e));
        }
        int temp;
        for(int i=0;i<tot;i++){
            if(s.find(i)==s.end()){
                temp=i;
                break;
            }
        }
        string str=bitset<16>(temp).to_string();
        return str.substr(16-n,n);
    }
};
