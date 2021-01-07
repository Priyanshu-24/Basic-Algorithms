//when an element is larger than its neighbours


int findPeakElement(vector<int>& a) {
        
        int start = 0, end = a.size()-1, n= a.size();
        
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            
            if((mid==n-1 || a[mid] > a[mid+1]) && (mid==0 || a[mid] > a[mid-1]))          // take care of the edge cases 
                return mid;                                                               // for mid==0 && mid==n-1
            
            else if(a[mid] > a[mid+1])          //pickup the probable candidate
                end = mid -1;
            
            else
                start = mid+1;
        }
        
        return 0;
        
    }

//Same question as search maximum element in a bitonic array    

//Another que is to search in a bitonic array => we will find the peak the divide the array in two parts and
// apply binary search in the two arrays one is sorted in increasing order and another in decreasing order
// so make two binary search functions one for the increasing and one for the decreasing                   