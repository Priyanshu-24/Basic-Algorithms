int max_sum(int a[], int n)
{
	int in = a[0];      //max sum including prev element
	int ex = 0;        //max sum excluding prev element
	int ne;

    for(int i=1;i<n;i++)
    {
    	//new sum excluding the current i
        ne = max(in,ex);
        
        // max sum including the current i
        in = a[i] + ex;
        ex = ne;
    }

    return max(in,ex);

}


//can also be solved using DP