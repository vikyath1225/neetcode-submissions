class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_water = 0;
        int l = 0;
        int r = heights.size()-1;
        while(l<r){
            int water = (r-l)*(min(heights[r],heights[l]));
            if(heights[l]>heights[r]){
                r--;
            }else {
                l++;
            }
            max_water = max(water,max_water);
        }
        return max_water;
    }
};
