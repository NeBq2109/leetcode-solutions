class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        auto it = digits.rbegin();
        
        size_t size = digits.size();
        
        while(it != digits.rend())
        {       
            if(*it < 9)
            {
                (*it)++;
                return digits;
            }
            else
            {
                *it = 0;
            }
            it++;
        }
        vector<int> num = {1};

        num.insert(num.end(), size, 0);
        
        return num;
        
    }
};