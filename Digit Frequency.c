#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    char* numbers = "0123456789";
    int y = 0;
    char count[10] = {};
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    
    while(y < strlen(s))
    {
        for(char i=0; i <= 9; i++) // Loop checking if the entered character is a number from 0 to 9
        {
            if (*(s + y) == numbers[i])
            {
                count[i]++; 
                break;
            }
        }
         
         y++;
    }
    
    
    for (int i = 0; i <= 9; i++)
    {
        printf("%d ", count[i]); // Printing the total count of each number from 0 to 9
    }
    return 0;
}
