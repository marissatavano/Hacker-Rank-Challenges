#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
	
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d", &a0, &a1, &a2);
	
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d", &b0, &b1, &b2);
    
    if(1<=a0 && b0 && a1 && b1 && a2 && b2<=100)
    {
        int ap = ((a0>b0?1:0) + (a1>b1?1:0) + (a2>b2?1:0));
        int bp = ((a0<b0?1:0) + (a1<b1?1:0) + (a2<b2?1:0));

        printf("%d %d", ap, bp);
		
    }
    else
    {
        printf("Out of bounds");
    }
    
    //return 0;
	
}
