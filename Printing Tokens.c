#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// 2. I didn't quite get it. 
// Why is the size of s always 8?

int main() {
    
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    
    while(*s != '\0')
{
    if(*s == ' ')
    {
        printf("\n");
    }
    else
    {
    printf("%c",*s);
    }
    s++;
}

    return 0;
}
