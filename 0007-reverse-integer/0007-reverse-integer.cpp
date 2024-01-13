class Solution {
public:
    int reverse(int x) {
    string parsedStr = std::to_string(x);
    int output;
    if (parsedStr.at(0) == '-') std::reverse(parsedStr.begin() + 1, parsedStr.end());
    else std::reverse(parsedStr.begin(), parsedStr.end());
    try
    {
        return stoi(parsedStr);
    }
    catch (std::out_of_range &exception)
    {
        return 0;
    }
    }
};