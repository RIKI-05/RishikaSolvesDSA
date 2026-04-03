class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // set<vector<string>>ans;
        // for(int i=0;i<strs.size();i++){
        //     string a = strs[i];
        //     sort(a.begin(),a.end());
        //     vector<string>s;
        //     for(int j=0;j<strs.size();j++){
        //         string b = strs[j];
        //         sort(b.begin(),b.end());
        //         if(a==b) s.push_back(strs[j]);
        //     }
        //     ans.insert(s);
        // }
        // vector<vector<string>>answer;
        // for(auto x : ans) answer.push_back(x);
        // return answer;

        map<string,vector<int>>m;
        for(int i =0;i<strs.size();i++){
            string a = strs[i];
            sort(a.begin(),a.end());
            m[a].push_back(i);
        }
        vector<vector<string>>ans;
        for(auto x : m){
            vector<string>s;
            for(auto v : x.second){
                s.push_back(strs[v]);
            }
            ans.push_back(s);
        }
        return ans;
    }
};
