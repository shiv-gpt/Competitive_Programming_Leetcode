class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = 0;
        int i = 0;
        while(j<n && i + j < m + n)
        {
            if(nums1[i + j]<nums2[j])
                i++;
            else
            {
                nums1.erase(nums1.end()-1);
                nums1.insert(nums1.begin() + i + j, nums2[j]);
                //i++;
                j++;
            }
        }
        i = m + j;
        while(j<n)
        {
            nums1[i++] = nums2[j++];
        }
    }
};
