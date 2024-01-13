class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) return false;
        /*
        else
        {
            unordered_map<char, uint> word_map_s, word_map_t;
            for(size_t i = 0 ; i < s.size(); i++)
            {
                word_map_s[s[i]]+=1;
                word_map_t[t[i]]+=1;
            }
            return word_map_s == word_map_t;
        }
        */
        unordered_map<char, int>  map;
        for(size_t i = 0 ; i < s.size(); i++)
        {
            map[s[i]]++;
            map[t[i]]--;
        }
        for (const auto& z : map) if(z.second != 0) return false;
        return true;
    }
};