class Solution {
public:
    string destCity(vector<vector<string>>& paths) 
    {
        unordered_set<string> citiesA;
        for (const auto& path : paths)
        {
            citiesA.insert(path[0]);
        }
        for (const auto& path : paths)
        {
            string dest = path[1];
            if(!citiesA.contains(dest))
            {
                return dest;
            }
        }
        return "";
    }
};
