class Solution {
public:
    int minOperations(string s) {
    if (s.length() == 1) return 0;
    int counter1 = 0, counter2 = 0;
    bool tweak = true;
    for(const char &c : s)
    {
        if(tweak)
        {
            if (c == '0') counter1++;
            else counter2++;
        }
        else
        {
            if (c == '0') counter2++;
            else counter1++;
        }
        tweak = !tweak;
    }
    return min(counter1, counter2);

    }
};