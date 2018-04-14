//#define std::pair<int,int> pii
class Solution {
public:
//     int maxval = -INT_MAX;
//     pii func(vector<int>& nums, int i, intj)
//     {
//         ;
//     }
    
    int maxSubArray(vector<int>& nums) {
        //int dp[nums.size()];
        //memset(dp,0,sizeof(nums));
        int max_ending_here =0;
        int max_so_far = -INT_MAX;
        int maxi = 0;
        int maxj = 0;
        int i = 0, j =0;
        for(int k = 0; k < nums.size();k++)
        {
            if(max_ending_here==0)
                i = k;
            max_ending_here = max_ending_here + nums[k];
            if(0>max_ending_here)
            {
                //dp[k] = 0;
                //max_ending_here = 0;
                j = k;
            }
            if(max_ending_here > max_so_far)
            {
                max_so_far = max_ending_here;
                maxi = i;
                maxj = j;
                //cout<<"maxi = "<<maxi<<"maxj = "<<maxj<<endl;
            }
            if(0>max_ending_here)
            {
                //dp[k] = 0;
                max_ending_here = 0;
                j = k;
            }
            
            
            
        }
        cout<<"maxi = "<<maxi<<"maxj = "<<maxj<<endl;
        return max_so_far;
        // int sum=0;
        // for(int i =0;i<nums.size();i++)
        // {
        //     dp[i][i] = nums[i];
        //     //sum = sum + nums[i];
        //     //dp[0][i] = sum 
        // }
        
    }
};
