/* Bubble sort code */ 
#include <stdio.h> 
int main()
{
  int array[100], n, c, d, swap;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = c+1 ; d < n ; d++)
    {
      if(array[c] > array[d]) /* For increasing order use < */
      {
	        swap       = array[c];
	        array[c]   = array[d];
	        array[d] = swap;
      }
    }
  }

  printf("\nSorted list in ascending order:\n");
 
  for ( c = 0 ; c < n ; c++ )
     printf("%3d", array[c]);
 
  return 0;
}
