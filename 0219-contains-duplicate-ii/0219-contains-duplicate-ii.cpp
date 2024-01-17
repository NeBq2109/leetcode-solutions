class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_map<int, size_t> mapVector;

        size_t index = 0;

        for(const int num : nums)
        {    
            auto it = mapVector.find(num);

            if(it == mapVector.end() || index - it->second > k) mapVector[num] = index;
            else if(index - it->second <= k) return true;

            index++;
        }
        return false;
    }
};