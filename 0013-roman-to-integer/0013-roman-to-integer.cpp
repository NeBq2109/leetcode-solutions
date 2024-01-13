class Solution {
public:
    int romanToInt(string s) {
    unordered_map<char, int> roman_map= {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000} };
    int sum = 0;
    for(auto it = s.begin(); it < s.end() - 1; it++)
    {
        if (roman_map[*it] < roman_map[*(it+1)]) sum -= roman_map[*it];
        else sum += roman_map[*it];
    }
    return sum + roman_map[*(s.end()-1)];

    }
};