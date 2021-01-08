
bool solve(int *a, int n, int m, int mid)
{
    int count=1,sum=0;
    
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        
        if(sum>mid)
        {
            count++;
            sum=a[i];
        }
        
        if(count>m)
        return false;
    }
    
    return true;
}

int findPages(int *a, int n, int m) {
    
    if(n<m)
    return -1;
    
    int sum=0;
    
    for(int i=0;i<n;i++)
    sum+=a[i];
      
    //take care while initializing high and low
    int low = *max_element(a,a+n);                //always initialize with max value
    int high = sum;                               
    int ans = 0;
    
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        
        if(solve(a,n,m,mid))
        {
            ans = mid;
            high = mid -1;
        }
        
        else
        low = mid+1;
        
    }
    
    return ans;
}

