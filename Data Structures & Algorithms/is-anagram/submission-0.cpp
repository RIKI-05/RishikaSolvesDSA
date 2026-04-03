class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>m;
        for(auto x : s){
            m[x]++;
        }
        for(auto x : t){
        if(m.find(x)!=m.end()){
            m[x]--;
            if(m[x] == 0)m.erase(x);
        }
        else return false;
        }

        return !m.size();

    }

};
