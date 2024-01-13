class Solution {
public:
    int mySqrt(int x) {

    if (x == 0 || x == 1) return x;
    
    int beg = 1, end = x, mid = -1;

    while(beg <= end)
    {
        mid = beg + (end - beg) / 2;
        long long square = static_cast<long long>(mid) * mid;
        if (square > x)
        {
            end = mid - 1;
        }
        else if (square < x)
        {
            beg = mid + 1;
        }
        else
        {
            return mid;
        }

    }

    return round(end);
        
    }
};