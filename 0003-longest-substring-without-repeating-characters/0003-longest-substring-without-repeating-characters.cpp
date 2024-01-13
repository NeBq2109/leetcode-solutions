
// Seems to work faster when you reserve vector for every character
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLength = 0;
        vector<int> charIndex(128, -1);
        int left = 0;
        
        for (int right = 0; right < n; right++) {
            if (charIndex[s[right]] >= left) {
                left = charIndex[s[right]] + 1;
            }
            charIndex[s[right]] = right;
            maxLength = max(maxLength, right - left + 1);
        }
        
        return maxLength;
    }
};


// Previous solution based on sets
/*
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

    unordered_set<char> letter_hashset;
    size_t maxLength = 0, left = 0;
    for(int right = 0; right < s.size(); right++)
    {
        char& c = s.at(right);
        char& c_left = s.at(left);
        if (letter_hashset.find(c) == letter_hashset.end())
        {
            letter_hashset.insert(c);
            maxLength = max(maxLength, right - left + 1);
        }
        else
        {   
            while(c_left!=c)
            {
                letter_hashset.erase(c_left);
                left++;
                c_left = s.at(left);
            }
            letter_hashset.erase(c_left);
            left++;
            letter_hashset.insert(c);
        }
    }
    return maxLength;   
    }
};
*/