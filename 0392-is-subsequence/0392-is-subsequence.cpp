class Solution {
public:
    bool isSubsequence(string s, string t) {
    int i = 0;
    size_t stringSize = s.size();
    if (stringSize == 0) return true;   
    for(char ct : t)
    {
        if(ct == s.at(i))
        {
            i++;
        }
        if(i == stringSize) return true;
    }
    return false;
    }
};