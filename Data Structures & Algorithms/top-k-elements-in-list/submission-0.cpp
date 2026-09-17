class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int num : nums){
            mp[num]++;
        }
        vector<vector<int>>bucket(nums.size()+1);
        for (auto x : mp){
            int number = x.first;
            int frequency = x.second;
            bucket[frequency].push_back(number);
        }
        vector<int>result;
        for(int i = bucket.size() -1;i>=0;i--){
            for(auto num : bucket[i]){
            result.push_back(num);
            if(result.size()==k){
                return result;
            }
        }

    
        
    }
    }
};