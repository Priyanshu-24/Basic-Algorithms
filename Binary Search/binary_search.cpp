//Iterative
                             //0      //n-1
int binary_search(int a[], int start, int end, int x)
{
	while(start <= end)
	{
		int mid = start + (end-start)/2;    //to avoid overflow

		if(a[mid] == x)
			return mid;

		else if(a[mid] < x)
			start = mid+1;

		else
			end = mid-1;
	}

	return -1;    //element is not present in the array
}


//Recursive

int binary_search(int a[], int start, int end, int x)
{
	if(start <= end)
	{
		int mid = start + (end-start)/2;

		if(a[mid] == x)
			return mid;

		else if(a[mid] < x)
			return binary_search(a, mid+1, end, x);

		else
			return binary_search(a, start, mid-1, x);
	}

	return -1;
}