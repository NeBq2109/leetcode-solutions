class Solution {
public:
    string convert(string s, int numRows) {

    vector<string> vecStr(numRows, "");
    string output;
    if (numRows == 1) return s;

    int currentLine = 0;
    int direction = -1;
    
    for(int i = 0 ; i < s.size() ; i++)
    {
        vecStr.at(currentLine)+= s.at(i);

        if(currentLine == 0 || currentLine == numRows - 1)
        {
            direction *= -1;
        }
        currentLine += direction;
    }

    for (const string& str : vecStr)
    {
        output += str;
    }

    return output;
    }
};