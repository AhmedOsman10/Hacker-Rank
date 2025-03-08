#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


// 2

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int Number_Sum =0 ;

    while(n>0)
    {
    Number_Sum = Number_Sum + n%10;
    n = n/10;
    }

    printf("%d",Number_Sum);
    
    return 0;
    
    }
