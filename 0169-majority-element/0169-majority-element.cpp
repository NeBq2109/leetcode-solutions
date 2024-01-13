class Solution {
public:
    int majorityElement(vector<int>& nums) {
    /*
    unordered_map<int, int> map;

    for(const int &el : nums)
    {
        map[el]++;
    }
    for(const auto &elM : map)
    {
        if(elM.second > nums.size() / 2) return elM.first;
    }
    return 0;
    */


    int counter = 0, dominant = 0;
    for(const int &el : nums)
    {
        if(counter == 0)
        {
            dominant = el;
            counter++;
        }
        else if(dominant == el) counter++;
        else counter--;
    }
    return dominant;
    }
};