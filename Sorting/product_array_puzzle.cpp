//Without using division operator

// Take two array one contains prefix and suffix multiplication
// And for a particular index ans will be the pre[i]*suff[i].

//Example a = [2,4,1,3]
// pre = [1,2,8,8]   // suff = [12,3,3,1]


left[0] = 1; 
  
    /* Rightmost most element of right  
array is always 1 */
    right[n - 1] = 1; 
  
    /* Construct the left array */
    for (i = 1; i < n; i++) 
        left[i] = arr[i - 1] * left[i - 1]; 
  
    /* Construct the right array */
    for (j = n - 2; j >= 0; j--) 
        right[j] = arr[j + 1] * right[j + 1]; 
  
    /* Construct the product array using  
        left[] and right[] */
    for (i = 0; i < n; i++) 
        prod[i] = left[i] * right[i]; 


// If we have to do it in O(1) space complexity then we just take one array as output array and do all the calculation
// in that output array

vector<int> productExceptSelf(vector<int>& a) {
        
        int n = a.size();
        vector <int>pro(n);
        
        pro[0] =1;
        
        int temp = 1;
        
        for(int i=0;i<n;i++)
        {
            pro[i] = temp;      //store prefix multiplication
            temp *= a[i];                
        }
        
        temp = 1;
        
        for(int i=n-1;i>=0;i--)
        {
            pro[i] *= temp;
            temp *= a[i];
        }
        
        return pro;
        
    }


//  Or just use power function as ......
// prod[i] = product of all elements * (int)pow(a[i],-1) ;

// As power of -1 is same as division    

