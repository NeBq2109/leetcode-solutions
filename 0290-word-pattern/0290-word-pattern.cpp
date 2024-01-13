class Solution {
public:
    bool wordPattern(string pattern, string s) {
    
    std::stringstream ss(s);
    unordered_map<char, string> map;
    unordered_map<string, char> map2;

    string token;
    int counter = -1, counterMax = pattern.size() - 1;

    while (ss >> token)
    {
        counter++;
        if (counter > counterMax) return false;
        auto it = map.find(pattern[counter]);
        auto it2 = map2.find(token);

        if(it == map.end()) map[pattern[counter]] = token;
        else if (map[pattern[counter]] != token) return false;

        if(it2 == map2.end()) map2[token] = pattern[counter];
        else if (map2[token] != pattern[counter]) return false;
    }
    return counter == counterMax;
    }
};