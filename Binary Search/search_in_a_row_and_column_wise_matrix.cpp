int search(int a[][], int n, int m, int x)
{
    int i = 0, j = m-1;

    while(i<n && j>=0)
    {
    	if(a[i][j] == x)
    		return a[i][j];

    	else if(a[i][j] > x)     // if the top-right corner element is greater than all other elements of that column are
    		j--;                //  useless as that element is the smallest in that column.

    	else
    		i++;               //if the element is greater than move to next row.
    }

    return -1;
}