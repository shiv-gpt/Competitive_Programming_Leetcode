class Solution {
public:
    int mySqrt(int x) {
        if(x<2) return x; 
        int low = 0;
        int high = x;
        int ans = 0;
        while(low<=high)
        {
            int mid = (low+high)/2;
            //cout<<"mid = "<<mid<<endl;
            //double v = mid*mid;
            if(mid <= x/mid)
            {
                low = mid+1;
                ans = mid;
                //cout<<"here";
                //break;
            }
            else 
            {
                high = mid-1;
            }
            
        }
        return ans;
    }
};
