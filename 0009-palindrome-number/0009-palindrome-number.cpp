class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        else
        {
            string z = to_string(x);
            
                for(auto it = z.begin(), itp = z.end() - 1; it < z.end() & itp >= z.begin(); it++, itp--)
                {
                    if(*it != *itp) return false;
                }
            return true;
        }
    }
};