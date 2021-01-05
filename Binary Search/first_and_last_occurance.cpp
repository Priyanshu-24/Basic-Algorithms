int first(int a[],int start, int end, int x)
{
	int ans = -1;            //take a variable
    while(start <= end)
	{
		int mid = start + (end-start)/2;    

		if(a[mid] == x)
		{
			ans = mid;           //store temporary answer
			end = mid-1;
		}
				
		else if(a[mid] < x)
			start = mid+1;

		else
			end = mid-1;
	}

	return ans;
}


int last(int a[],int start, int end, int x)
{
	int ans = -1;
    while(start <= end)
	{
		int mid = start + (end-start)/2;    

		if(a[mid] == x)
		{
			ans = mid;           //store temporary answer
			start = mid+1;
		}
				
		else if(a[mid] < x)
			start = mid+1;

		else
			end = mid-1;
	}

	return ans;
}



