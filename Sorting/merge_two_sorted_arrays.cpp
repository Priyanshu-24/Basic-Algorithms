// The most basic solution will be using an third array with size n+m and put all elements of a1 and a2 into it or sort it 
// Or just use intution of merge sort by putting elements by comparing......time O(n+m) with space O(n+m) 


// Now if we have to do it in O(1) space we can use something like insertion sort.
// Compare the first element of a1 with a2 and if a1 > a2 swap the element and arrange a2 in sorted order
// Time O(n*m) bcoz in iteration of n we are arranging a2 everytime to make it sorted.


//Now O(n+m) method ....Gap Method


int nextGap(int gap)
{
    if(gap <= 1)
    return 0;
    
    return (gap/2) + (gap%2);           //ceil of n+m/2
}

void merge(int a1[], int a2[], int n, int m) 
{ 
    int i,j,gap=n+m;
    
    gap = nextGap(gap);
    
    while(gap > 0)               //if gap is 1 or less stop the loop in next iteration
    {

    	//compare in first array
        for(i=0;i+gap<n;i++)
        {
            if(a1[i] > a1[i+gap])
            swap(a1[i],a1[gap+i]);
        }
        

        //compare in both the arrays
        for(j = gap>n ? gap-n : 0; i<n && j<m ; i++,j++)
        {
            if(a1[i] > a2[j])
            swap(a1[i],a2[j]);
        }
        

        // if j is not out of bound then compare in second array
        if(j<m)
        {
            for(j=0;j+gap<m;j++)
            {
                if(a2[j] > a2[j+gap])
                swap(a2[j],a2[gap+j]);
            }
        }
        
        gap = nextGap(gap);            //change the value of gap for next iteration 
    }
}  