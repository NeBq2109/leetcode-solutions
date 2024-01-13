class Solution {
public:
    int strStr(string haystack, string needle) {
    
    int increment = 0, incrementMax = needle.size();

    for(int i = 0; i < haystack.size(); i++)
    {
        if(needle[increment] == haystack[i])
        { 
            cout << needle[increment] << " : " << increment << endl;
            increment++;
        }
        else
        {
            i = i - increment;
            increment = 0;
        }
        if(increment == incrementMax) return i + 1 - incrementMax;
    }
    //cout << i + 1 - incrementMax << endl;
    return -1;
    }
};