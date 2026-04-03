class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        set<vector<string>>ans;
        for(int i=0;i<strs.size();i++){
            string a = strs[i];
            sort(a.begin(),a.end());
            vector<string>s;
            for(int j=0;j<strs.size();j++){
                string b = strs[j];
                sort(b.begin(),b.end());
                if(a==b) s.push_back(strs[j]);
            }
            ans.insert(s);
        }
        vector<vector<string>>answer;
        for(auto x : ans) answer.push_back(x);
        return answer;
        
    }
};
