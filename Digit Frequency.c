#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    char* numbers = "0123456789";
    char y = 0;
    char count[10] = {};
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    
    while(y < strlen(s))
    {
        for(char i=0; i <= 9; i++) // loop for checking the character if it;s equal nay number from 0 to 9
        {
            if (*(s + y) == numbers[i])
            {
                count[i]++; 
                i = 9;
            }
        }
         
         y++;
    }
    
    
    for (int i = 0; i <= 9; i++)
    {
        printf("%d", count[i]);
    }
    return 0;
}
