class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxval = -1;
        int i = 0;
        int j = height.size()-1;
        while(i<j)
        {            
            int a1=height[i];
            int a2 = height[j];
            int a = min(a1,a2)*(j-i);
            if(a>maxval)
            {
                maxval=a;
            }
            if(height[i] < height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
            
        }
        return maxval;
    }
};
