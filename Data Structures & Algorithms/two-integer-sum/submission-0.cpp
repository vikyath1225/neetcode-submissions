class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map < int,int > check;
        for(int i = 0; i < nums.size(); i++){
            int minus = target - nums[i];
            if(check.count(minus)){
                return {check[minus], i};
            } else{
                check[nums[i]] = i;
            }
            

        }
        return{};
            }
};
        
     
