// In an array of size n+1 only +ve numbers from 1 to n are present

//Good Question for F2F interview

// First method is to sort the array and traverse it linearly.

// Second methos is to use hashing and store the no of times an element occurs or use a count array.


//Efficient approaches with time : O(n)  and space : O(1) are as follows

// If modification in the input array is allowed then we can use input array and mark the indices as visited elements

void repeating_and_missing(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[abs(a[i])-1] > 0)                           //absolute value bcoz we will make the visited value -ve
			a[abs(a[i])-1] = -a[abs(a[i])-1];      //if not visited before make it -ve to mark visited

		else
			cout<<abs(a[i]);                //repeating element
	}


	for(int i=0;i<n;i++)
		if(a[i] > 0)
			cout<<a[i];                   //missing no
}



// If modification is not allowed in the input array then we will use two equations to find our two unknowns 
// i.e. missing and repeating number.

vector<int> repeating_and_missing(const int a[], int n)
{
	long long int sum = (n(n+1))/2;
	long long int sum_s = (n(n+1)(2n+1))/2;

	for(int i=0;i<n;i++)
	{
		sum    -= (long long int)a[i];
		sum_s  -= (long long int)a[i]*(long long int)a[i];
	}

	long long int missing = (sum + sum_s/sum)/2;

	long long int repeating = missing - sum;

	vector <int>ans;

	ans.push_back(missing);
	ans.push_back(repeating);

	return ans;
}

// The only drawbreak of this method is that it can cause overflow as we are storing sum of n natural numbers
// and sum of n square numbers.