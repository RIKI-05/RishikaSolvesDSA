class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>ans;
        vector<vector<int>>res;
        map<int,int>mp;
        for(auto x : nums)mp[x]++;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]--;
            for(int j=i+1;j<nums.size();j++){
                mp[nums[j]]--;
                int a = nums[i];
                int b = nums[j];
                int c = 0-a-b;
                if(mp.count(c) && mp[c] > 0){
                    vector<int> triplet = {a, b, c};
                    sort(triplet.begin(), triplet.end());
                    ans.insert(triplet);
                }
                mp[nums[j]]++;
            }
            mp[nums[i]]++;
        }

        for(auto x: ans){
            res.push_back(x);
        }

        return res;
    }
};
