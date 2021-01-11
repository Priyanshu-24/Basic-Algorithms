//If element is present then cceil and floor is equal to that element, otherwise

//fl = largest element smaller than the element
//ceil = smallest element larger than the element

int floor(int a[], int start, int end, int x)
{
	int ans = -1;

	while(start <= end)
	{
		int mid = start + (end-start)/2;    //to avoid overflow

		if(a[mid] == x)
			return a[mid];

		else if(a[mid] < x)
			{
				ans = a[mid];                       //update ans
				start = mid+1;
			}

		else
			end = mid-1;
	}

	return ans;
}


int ceil(int a[], int start, int end, int x)
{

    int ans = -1;

	while(start <= end)
	{
		int mid = start + (end-start)/2;    //to avoid overflow

		if(a[mid] == x)
			return a[mid];

		else if(a[mid] < x)
			start = mid+1;

		else{
			ans = a[mid];           //update ans
			end = mid-1;
		}
	}

	return ans;
}

// que for ceil
// https://leetcode.com/problems/find-smallest-letter-greater-than-target/
