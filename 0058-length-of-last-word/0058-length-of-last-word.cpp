class Solution {
public:
    int lengthOfLastWord(string s) {
    bool start = false;
    int counter = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if(s.at(i) == ' ' && start)
        {
            break;
        }
        else if(s.at(i) != ' ')
        {
            counter++;
            start = true;
        }
    }
    return counter;

    }
};