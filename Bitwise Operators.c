#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int b = 1, Max_And = 0, Max_Or = 0, Max_Xor = 0;
  for(int a = 1; a <= n; a++)
  {
      for(b = a + 1; b <= n; b++)
      {
        if(((a&b) > Max_And) && ((a&b) < k))
            Max_And = a&b;
        if(((a|b) > Max_Or)  && ((a|b) < k))
            Max_Or = a|b;
        if(((a^b) > Max_Xor) && ((a^b) < k))
            Max_Xor = a^b;
      }
  }
  
  printf("%d\n%d\n%d\n", Max_And, Max_Or, Max_Xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
