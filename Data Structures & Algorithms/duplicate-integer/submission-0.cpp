class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map <int, int> xaf;
        for(int i= 0; i < nums.size(); i++){
            int currentnumber = nums[i];
            xaf[currentnumber] += 1;
            if (xaf[currentnumber] >= 2){
                return true;
            }
      
        }
          return false;


        
    }
};