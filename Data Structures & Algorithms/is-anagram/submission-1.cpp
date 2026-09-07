class Solution {
public:
    bool isAnagram(string s, string t) {
         unordered_map < char, int > ms;
       unordered_map < char, int > mt;
        int size_s = s.length();
        int size_t = t.length();
        if (size_s != size_t) {return false;}

        for(int i = 0; i < size_s; i++){
            char current = s[i];
            ms[current] += 1;
        }
      for(int i = 0; i < size_t; i++){
            char current = t[i];
            mt[current] += 1;
        }
       if (mt == ms){ return true;}
       else return false;

    }
};
