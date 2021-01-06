//No of times a sorted array is rotated = Index of Minimum element = Pivot 


int find_min(vector<int> a, int start, int end, int n)
    {
        
        
        while(start<=end)
        {
           if(a[start] <= a[end])          //if array is already sorted
               return start;
            
            int mid = start + (end-start)/2;
            
            int next = (mid+1)%n;                   //to avoid overflow
            
            int prev = (mid-1+n)%n;
            
            if(a[mid] <= a[prev] && a[mid] <= a[next])       //if both the elements on either side are greater than 
                return mid;                                  //a[mid] is the smallest element 
            
            else if(a[mid] >= a[start])    
                start = mid+1;
            
            else 
                end = mid-1;
            
            
        }
        
        return 0;
    }