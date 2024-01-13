class Solution {
public:
    int jump(vector<int>& nums) {
        
    int vectSize = nums.size();

    if (vectSize == 1) return 0;

    int possiblePos = 0, optimalPos = 0, jumps = 0;

    for(int i = 0 ; i < vectSize - 1 ; i++)
    {
        possiblePos = max(possiblePos, i + nums[i]);
        if(optimalPos == i)
        {
            optimalPos = possiblePos;
            jumps++;
        }
    }
    return jumps;
    }
};