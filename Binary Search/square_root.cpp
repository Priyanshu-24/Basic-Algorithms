int mySqrt(int x) {
        
        if(x==0 || x==1)      //base case 
            return x;
        
        int start = 0, end = x, ans;
        
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            
            if(mid == x/mid)         //if perfect square
                return mid;
            
            else if(mid < x/mid)      //otherwise return floor
            {
                ans = mid;
                start = mid+1;
            }
            
            else
                end = mid-1;
        }
        
        return ans;
        
    }

//using mid == x/mid instead of mid*mid == x to avoid overflow    