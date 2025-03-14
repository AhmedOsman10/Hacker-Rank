#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */     
    
    char ch, s[150], str[50];
    scanf("%c ", &ch);
    scanf("%[^\n]%*c", s);
    fgets(str, 50, stdin);
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", str);
    

    
    return 0;
}
