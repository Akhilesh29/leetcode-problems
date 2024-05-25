bool sortFunc(pair<string, int> &a, pair<string, int> &b){
    if(a.second != b.second) return a.second > b.second;
    return a.first<b.first;
}

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> m;
        for(auto a: words){
            m[a]++;
        }
        vector<pair<string, int>> v;
        for(auto a: m){
            v.push_back({a.first, a.second});
        }
        sort(v.begin(), v.end(), sortFunc);
        vector<string> res;
        for(int i=0; i<k; i++){
            res.push_back(v[i].first);
        }
        return res;
    }
};