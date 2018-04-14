class Solution {
public:
    
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.empty())
        {
            vector<int> ans;
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        int low = 0;
        int high = nums.size() - 1;
        int start = -1;
        int end = -1;
        int mid = 0;
        while(low<high)
        {
            mid = (high+low)/2;
            if(nums[mid] < target)
            {
                //cout<<"greater"<<endl;
                low = mid+1;
            }
            else high = mid;
            //cout<<"low = "<<low<<endl;
            //cout<<"high = "<<high<<endl;
        }
        if(nums[low] == target)
        {
            //cout<<"equal"<<endl;
            start = low;
            //break;
        }
        //cout<<start;
        if(start == -1)
        {
            vector<int> ans;
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        
        high = nums.size() - 1;
        while(low<high)
        {
            mid = (high+low)/2 + 1;
            if(nums[mid] > target)
            {
                high = mid - 1;
            }
            else low = mid;
        }
        if(nums[high] == target)
        {
            end = high;
            //break;
        }
        vector<int> ans;
        //if 
        ans.push_back(start);
        ans.push_back(end);
        return ans;
    }
};
