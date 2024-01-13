class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> answer;
        int maxIndex = nums.size() - 1;
        int indexBeg = 0, indexEnd = 0;
        while(indexEnd <= maxIndex)
        {
            if(indexEnd < maxIndex && long(nums[indexEnd + 1]) - long(nums[indexEnd]) == 1) indexEnd++;
            else
            {
                if(indexBeg != indexEnd) answer.push_back(to_string(nums[indexBeg]) + "->" + to_string(nums[indexEnd]));
                else answer.push_back(to_string(nums[indexBeg]));
                indexBeg = indexEnd + 1;
                indexEnd++;
            }

        }
        return answer;
    }
};