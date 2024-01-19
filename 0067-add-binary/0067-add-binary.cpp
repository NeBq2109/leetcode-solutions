class Solution {
public:
    string addBinary(string a, string b) {
        
        string answer = "";
        
        if (a.size() < b.size()) swap(a, b);
        
        int itA = a.size() - 1, itB = b.size() - 1;
        bool res = false;
        while(itA >= 0)
        {
            if(itB >= 0)
            {
                if(a[itA] != b[itB])
                {
                    if(res) answer += '0';
                    else answer += '1';
                }
                else if(a[itA] == '0')
                {
                    if(res)
                    {
                        answer += '1';
                        res = false;
                    }
                    else answer += '0';
                }
                else if(res) answer += '1';
                else
                {
                    res = true;
                    answer += '0';
                }
            }
            else
            {
                if(a[itA] == '0')
                {
                    if(res)
                    {
                        res = false;
                        answer += '1';
                    }
                    else answer += '0';
                }
                else if(res) answer += '0';
                else answer += '1';
            }
        itA--;
        itB--;

        }
        if(res) answer += '1';
        reverse(answer.begin(), answer.end());
        return answer;
            
        
    }
};