#include <bits/stdc++.h>
using namespace std;
#define lli long long int

bool solve(lli a[], lli n, lli mid, lli m)
{
	lli ans = 0;
	
	for(lli i=0;i<n;i++)
	{
		if(a[i]>mid)
		{
			ans+=(a[i]-mid);
		}
	}
	
	if(ans >= m)
	return true;
	
	return false;
}

int main() {
	
	lli n,m;
	cin>>n>>m;
	
	lli a[n];
	
	for(lli i=0;i<n;i++)
	cin>>a[i];
	
	lli low = 0, high = *max_element(a,a+n);
	lli ans = 0;
	
	while(low<=high)
	{
		lli mid = low + (high-low)/2;
		
		if(solve(a,n,mid,m))
		{
			ans = mid;
			low = mid+1;
		}
		
		else 
		high = mid-1;
	}
	
	cout<<ans;
	
	return 0;
}