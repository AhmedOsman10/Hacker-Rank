#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int x, y;
    float z, g;
    scanf("%d %d", &x, &y);
    scanf("%f %f", &z, &g);
    
    printf("%d ", x + y);
    printf("%d\n", x - y);

    printf("%0.1f ", z + g);
    printf("%0.1f\n", z - g);

    return 0;
}
