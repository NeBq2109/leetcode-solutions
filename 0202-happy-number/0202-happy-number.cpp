class Solution {
public:
    bool isHappy(int n) {

    int slow = n;
    int fast = n;    
    
    do
    {
        slow = square(slow);
        fast = square(square(fast));
    }
    while (slow != fast);

    return slow == 1;

    }
private:
    int square(int num)
    {
        int sum = 0;
        while(num > 0)
        {
            sum += (num % 10)*(num % 10);
            num /= 10;
        }
        return sum;
    }

};