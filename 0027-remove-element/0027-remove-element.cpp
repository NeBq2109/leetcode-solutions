class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        sort(nums.begin(), nums.end()); 
        int result = nums.size(), distance_R, distance_L;
        auto it_l = find(nums.begin(), nums.end(), val);
        auto it_r = find(nums.rbegin(), nums.rend(), val);

        distance_L = std::distance(nums.begin(), it_l);
        distance_R = std::distance(nums.rbegin(), it_r);

        int move = (result - distance_R - distance_L);

        if (move > 0) nums.erase(it_l, it_l + move);
        return nums.size();
    }
};

// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int index = 0;
//         for(int i = 0; i< nums.size(); i++){
//             if(nums[i] != val){
//                 nums[index] = nums[i];
//                 index++;
//             }
//         }
//         return index;
//     }
// };