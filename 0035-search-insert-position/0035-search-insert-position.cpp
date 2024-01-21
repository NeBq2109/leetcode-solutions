class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int it_left = 0, it_right = nums.size(), mid;

        if(nums[it_right - 1] < target) return it_right;

        while(it_left <= it_right)
        {
            mid = (it_right + it_left) / 2;
            auto nums_val = nums.at(mid);
            if(nums_val > target)
            {
                it_right = mid - 1;
            }
            else if(nums_val == target) return mid;
            else it_left = mid + 1;

        }
        return it_left;
    }
};