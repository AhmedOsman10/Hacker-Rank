#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
        
        double s[n];
        
    	for (int i = 0; i < n; i++) 
        {
		    float p  = (double)(float)(tr[i].a + tr[i].b + tr[i].c) / 2.0;
            s[i] = sqrt(p * (p - (double)tr[i].a) * (p - (double)tr[i].b) * (p - (double)tr[i].c));
	    }    
	    
	    double temp;
	    triangle tempTr;
	        // Bubble Sort algorithm
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (s[j] > s[j + 1])
                {  // Swap if elements are in the wrong order
                    temp = s[j];
                    s[j] = s[j + 1];
                    s[j + 1] = temp;
                    
                    
                    tempTr = tr[j];
                    tr[j] = tr[j + 1];
                    tr[j + 1] = tempTr;
                }
            }
            
        }       
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}