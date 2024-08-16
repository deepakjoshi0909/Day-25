class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>umap;
        for(string s: strs){
            string str = s;
            sort(str.begin(),str.end());
            umap[str].push_back(s);
        }

        vector<vector<string>>ans;
        for(auto p : umap){
            ans.push_back(p.second);
        }
        return ans;
    }
};
