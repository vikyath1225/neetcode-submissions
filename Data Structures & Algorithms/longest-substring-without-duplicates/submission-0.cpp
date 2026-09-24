class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>us;
        int l = 0;
        int res = 0;
        for(int r = 0; r<s.size();r++){
            while(us.count(s[r])){
                us.erase(s[l]);
                l++;
            }
            us.insert(s[r]);
            res = max(res, r-l+1);
        }
        return res;   
    }
};
