class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector <vector<string>> sol;
        unordered_map<string, vector<string>> group;
        for (int i = 0; i < strs.size(); i++) {
            string str = strs[i];
            sort(str.begin(), str.end());
            group[str].push_back(strs[i]);
        }
        
        for (auto a: group) sol.push_back(a.second);
        
        return sol;
    }
};
