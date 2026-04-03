class Solution {
    static bool cmp(pair<int, int>& a, pair<int, int>& b) { 
        return a.second > b.second; 
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        for (auto x : nums) {
            m[x]++;
        }
        vector<pair<int, int>> freq(m.begin(), m.end());
        sort(freq.begin(), freq.end(), cmp);
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(freq[i].first);
        }
        return ans;
    }
};
