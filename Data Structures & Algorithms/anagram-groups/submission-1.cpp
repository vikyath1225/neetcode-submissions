class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map< string, vector<string>>mp;
        for(int i = 0; i< strs.size();i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
        }
        vector<vector<string>> result(mp.size());
        int index = 0;
        for(auto x:mp){
            auto temp = x.second;
            for(auto x:temp){
                result[index].push_back(x);
            }
            index++;

        }
return result;
        }
    };
