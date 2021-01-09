// an element occurs more than floor of n/2 times.

//First approach is that to run two loops and count the number of times each element occurs  ( O(n^2) )

//Second approach is to use a hash and store the count of each element

//Third and most efficient.....Moore Voting Algorithm

int majority(int *a, int n)
{
	int count=0, element = 0;

	for(int i=0;i<n;i++)
	{
		if(count==0)
		{
			element = a[i];
		}

		if(a[i]==element)
			count++;

		else
			count--;
	   
    }

   return element;
   	
}