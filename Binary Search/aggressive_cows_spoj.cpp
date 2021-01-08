#include <bits/stdc++.h>
using namespace std;

bool solve(long long int a[], long long int mid, long long int n, long long  int c)
{
	int count=1, lp=a[0];
	
	for(int i=1;i<n;i++)
	{
		if(a[i]-lp >= mid)
		{
			if(++count==c)
			return true;
			
			lp=a[i];
		}
	}
	
	return false;
}

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,c;
		cin>>n>>c;
		
		long long int a[n];
		
		for(int i=0;i<n;i++)
			cin>>a[i];
		
		sort(a,a+n);
		
		long long int low = 0, high = a[n-1]-a[0],ans=0;
		
		while(low<=high)
		{
			long long int mid = low + (high-low)/2;
			
			if(solve(a,mid,n,c))         //the main thing is to find the solve function
			{
				ans = mid;
				low = mid+1;
			}
			
			else
			 high = mid-1;
		}
		
		cout<<ans<<endl;
		
		
		
	}
	
	return 0;
}