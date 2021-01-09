// Brute force is to run three loops and find the sum.....i = 0 to n-2, j = i+1 to n-1 , k = j+1 to n

// Optimized approach is to sort the array and use two pointers...

	int countTriplets(int a[], int n, int sum)
	{
	    int count = 0;
	    
	    sort(a,a+n);
	    
	    for(int i=0;i<n-2;i++)
	    {
	        int l = i+1;
	        int r = n-1;
	        
	        while(l<r)
	        {
	            if(a[i]+a[l]+a[r] < sum)
	            {
	                count+= (r-l);                 //we are not doing count++....bcoz all all elements from l to r-1 
	                l++;                          // will also satisfy the given condition
	            }
	            
	            else r--;
	        }
	    }
	    
	    return count;
	}
		 