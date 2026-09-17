class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(string str : strs){
            ans += to_string(str.size()) + "#" + str;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        int length_s = s.size();
        while (i<length_s){
        int j = i;
        while (s[j]!='#'){j++;};
        int length = stoi(s.substr(i,j-i));
        i = j+1;
        result.push_back(s.substr(i,length));
        i += length;
    }
    return result;
    }
};
