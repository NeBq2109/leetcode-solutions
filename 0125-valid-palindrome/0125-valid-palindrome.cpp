class Solution {
public:
    bool isPalindrome(string s) {

        stack<char> stackPalindrome;
        for(char c : s)
        {
            if(isalnum(c))
            {
                stackPalindrome.push(toupper(c));
                cout << c << endl;
            }
        }
        for(char c : s)
        { 
            if(isalnum(c))
            {
                c = toupper(c);
                if(c!= stackPalindrome.top()) return false;
                else
                {
                    stackPalindrome.pop();
                }
            }
        }
        return true;


    }
};