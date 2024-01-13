// Pretty slow, but works
/*
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = nums1.size(), j = nums2.size(), it = 0, num1_counter = 0, num2_counter = 0;

        cout << i << " : " << j << endl;
        float median = 0.0;
        if ((i + j)%2 == 0)
        {
            while(it <= (i + j) /2)
            {
             if(num1_counter < i && num2_counter < j)
             {
                if(nums1[num1_counter] < nums2[num2_counter])
                {
                    if(num1_counter + num2_counter > (i + j) / 2 - 2) median+=nums1[num1_counter];
                    num1_counter++;
                }
                else
                {
                    if(num1_counter + num2_counter > (i + j) / 2 - 2) median+=nums2[num2_counter];
                    num2_counter++;
                }
             }
             else if(num1_counter < i)
             {
                 if(num1_counter + num2_counter > (i + j) / 2 - 2) median+=nums1[num1_counter];
                 num1_counter++;
             }
             else
             {
                if(num1_counter + num2_counter > (i + j) / 2 - 2) median+=nums2[num2_counter];
                num2_counter++;
             }
                cout << median << endl;
                it++;
            }
            median /= 2.0;
            return median;
        }
        else
        {
            while(num1_counter + num2_counter < (i + j) /2 + 1)
            {
             if(num1_counter < i && num2_counter < j)
             {
                if(nums1[num1_counter] < nums2[num2_counter])
                {
                    median = nums1[num1_counter];
                    if(num1_counter < i) num1_counter++;
                    cout << num1_counter << endl;
                }
                else
                {
                    median = nums2[num2_counter];
                    if(num2_counter < j) num2_counter++;
                    cout << num2_counter << endl;
                }
             }
             else if(num1_counter < i)
             {
                 median=nums1[num1_counter];
                 num1_counter++;
             }
             else
             {
                 median=nums2[num2_counter];
                 num2_counter++;
             }
            
                cout << median << endl;
               
            }

            return median;
        }

    }
};
*/
// Faster
class Solution {
public:
    int m, n;
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        m = nums1.size(), n = nums2.size();
        int l = 0, h = m;
        double res = 0.0;
        while(l <= h){
            int mid = (l + h)/2;
            if(num_ele(mid, nums1, nums2)) h = mid - 1;
            else  l = mid + 1;
        }
        int x = (m + n + 1)/2 - l;
        int ans = (l > 0) ? (nums1[l - 1]) : (nums2[x - 1]);
        if(l > 0) ans = max(ans, nums1[l - 1]);
        if(x > 0) ans = max(ans, nums2[x - 1]);
        res = ans;
        if((m + n + 1)& 1)
        {
            ans = (l < m) ? (nums1[l]) : (nums2[x]);
            if(l < m) ans = min(ans, nums1[l]);
            if(x < n) ans = min(ans, nums2[x]);
            res += ans;
            res /= 2;
        }
        return res;
    }
private:
    bool num_ele(int c, const vector<int>& a1, const vector<int>& a2){
        int x = (m + n + 1)/2 - c;
        if(x > n) return false;
        else if(x < 0) return true;
        if(c > 0 && x < n && a1[c - 1] > a2[x]) return true;
        if(x > 0 && c < m && a1[c] < a2[x - 1]) return false;
        return true;
    }
};
