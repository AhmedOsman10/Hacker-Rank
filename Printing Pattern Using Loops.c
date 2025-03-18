#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    
    int x;
    int k;
    int t;

    int* previous_numbers = (int*)malloc(n * sizeof(int)); // This array saves each individual number only once, e.g., 8, 7, .. , 1
    int size = (2 * n - 1); // The length of a single row
    int* numbers_saver = (int*)malloc(size * n * sizeof(int)); // This array saves all the numbers from row one until the midpoint (at n = 1).
  	int q = 0;
  	
  	// This for loop prints all the numbers from the beginning until the midpoint (at n = 1)
  	for (int i = n; i >= 1; i--)
  	{
  	    previous_numbers[i-1] = i;
  	    x = n-i;
  	    t = (i * 2) - 1;
  	    k = 1;
  	    
  	    for(int j = (n * 2) - 1; j > 0; j--)
  	    {
  	        if ( 1 <= x)
  	        {
  	            printf("%d ", previous_numbers[n-k]);
  	            numbers_saver[(q++)] = previous_numbers[n-k];
  	             k++;
  	        }
  	        
  	        else if( 1 <= t)
  	        {
  	            printf("%d ", i);
  	            numbers_saver[q++] = i;
  	            t--;
  	            k = i;
  	        }
  	        
  	        else
      	    {
      	        printf("%d ", previous_numbers[k]);
      	       numbers_saver[q++] = previous_numbers[k];
      	        k++;
      	    }
      	    
      	    x--;
  	    }
  
  	    printf("\n");
  	}
  	
  	// This for loop starts printing from the first row after reaching the midpoint (at n = 1) until the end.
  	for (int s = (((n*2)-1) * n) - ((n*2)-1); s > 0 ; s--)
  	{
  	    for(int m = ((n*2)-1); 0 < m; m--)
  	    {
  	        printf("%d ", numbers_saver[--s]);
  	    }
  	    printf("\n");
  	    s++;
  	}
    return 0;
}
