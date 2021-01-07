//Find the pivot element or index
//Divide the array in two parts......0 to pivot-1  and  pivot to n-1
//Apply binary search in both arrays as both the arrays are sorted and return if found in any of them or return -1


int pivot_search(vector<int>a, int n)
    {
        int start=0,end=n-1;
        
        while(start<=end)
        {
            if(a[start] <= a[end])
                return start;
            
            int mid = start + (end-start)/2;
            int next = (mid+1)%n;
            int prev = (mid-1+n)%n;
            
            if(a[mid] <= a[prev] && a[mid] <= a[next])
                return mid;
            
            else if(a[mid] >= a[start])
                start = mid+1;
            
            else end = mid-1;
        }
        
        return -1;
    }
    
    int binary_search(vector<int>a, int start, int end, int x)
    {
        while(start<=end)
        {
            int mid = start +(end-start)/2;
            
            if(a[mid]==x)
                return mid;
            
            else if(a[mid] < x)
                start = mid+1;
            
            else
                end = mid-1;
        }
        
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        
        int pivot = pivot_search(nums,nums.size());
        
        if(nums[pivot]==target)
            return pivot;
        
        
        int a1 = binary_search(nums,0,pivot-1,target);
        
        
        int a2 = binary_search(nums,pivot,nums.size()-1,target);
        
        return max(a1,a2);
        
        
        
    }