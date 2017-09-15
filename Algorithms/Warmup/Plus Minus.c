#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N, i, A, pos = 0, neg = 0, zero = 0;
    float p, n, z;
    
    /* get the number of integers */
    scanf("%d", &N);
    
    for(i = 0; i < N; i++)
    {
        
        /* get the number */
        scanf("%d", &A);
        
        /* if the number is zero, increment the zero count */
        if(A==0)
        	zero++;
        
        /* if the number is a positive number, increment the positive count */
        else if(A > 0)
            pos++;
            
        /* else, increment the negative numbers count */
        else
            neg++;
    }
    
    p = (float)pos/N;
    n = (float)neg/N;
    z = (float)zero/N;
    
    /* print the result count of positive numbers, negative numbers, zero */
    printf("%0.3f\n%0.3f\n%0.3f", p, n, z);
    
    return 0;

	
}


