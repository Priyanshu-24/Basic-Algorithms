//The only concern here is to find the end index.

int search(int a[], int x)
{
	int start = 0;
	int end = 1;


   while(a[end] < x)
   {
   	  start = end;
   	  end = end *2;
   }

   //Now apply binary search in the array with the given low and high

}