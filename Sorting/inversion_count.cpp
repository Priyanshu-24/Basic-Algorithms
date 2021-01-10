// The very basic solution is to run two loops and check if a[i] > a[j].


//Apply merge sort

//Just take care of the parameters carefully and take a close look at low ,high and mid how they are
// placed in the parameters.

//And count the inversions in merge function :)


long long int merge(long long a[], long long temp[], int low, int mid, int high)
{
    long long i = low, j = mid, k = low, count  = 0;
    
    while(i<=mid-1 && j<=high)
    {
        if(a[i] <= a[j])
        temp[k++] = a[i++];
        
        else
        {
            temp[k++] = a[j++];
            
            count += (mid-i);           //The only thing to take care of....:)
        }
    }
    
    while(i<=mid-1)
    temp[k++] = a[i++];
    
    while(j<=high)
    temp[k++] = a[j++];
    
    for(i=low;i<=high;i++)
    a[i] = temp[i];
    
    return count;
}

long long int mergesort(long long a[], long long temp[], int low, int high)
{
    long long count = 0;
    
    if(low < high)
    {
        long long mid = low + (high-low)/2;
        
        count+=mergesort(a,temp,low,mid);
        count+=mergesort(a,temp,mid+1,high);
        
        count+=merge(a,temp,low,mid+1,high);
    }
    
    return count;
}


long long int inversionCount(long long a[], long long n)
{
    long long  temp[n];
    
    return mergesort(a,temp,0,n-1);
}
