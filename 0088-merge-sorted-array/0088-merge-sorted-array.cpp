class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    
    int i = m - 1, j = n - 1, it = m + n - 1;
    if (m == 0) nums1 = nums2;
    while(it >= 0)
    {
        if (i >= 0 && j >= 0)
        {
            if (nums1[i] < nums2[j])
            {
                nums1[it] = nums2[j];
                j--;
            }
            else if (nums1[i] >= nums2[j])
            { 
                nums1[it] = nums1[i];
                i--;
            }
        }
        else if(i >= 0)
        {
            nums1[it] = nums1[i];
            i--;
        }
        else if(j >= 0)
        {
           nums1[it] = nums2[j];
           j--;
        }
        it--;
    }

    }
};