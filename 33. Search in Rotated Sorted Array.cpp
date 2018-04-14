class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 0)
            return -1;
        int low = 0;
        int high = nums.size()-1;
        
        while(low<high)
        {
            int mid = (low+high)/2;
            //cout<<mid<<" "<<low<<" "<<high<<endl;
            
            if(nums[high] < nums[mid])
            {
                low = mid + 1;
            }
            else high = mid;
        }
        int pivot = low;
        //cout<<pivot;
        //pivot=pivot%nums.size();
        low = 0;
        high = nums.size()-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            int rmid = (mid+pivot)%nums.size();
            if(target == nums[rmid])
                return rmid;
            else if(target < nums[rmid])
            {
                high = mid-1;
            }
            else low = mid+1;
        }
        
        return -1;
        
    }
};
