#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int x1,x2,v1,v2,flag=0,i;
    scanf("%llu %llu %llu %llu",&x1,&v1,&x2,&v2);
    for(i=0;i<10000;i++)
    {
        x1=x1+v1;
        x2=x2+v2;
        if(x1==x2)
        {
            printf("YES\n");
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("NO\n");
    return 0;
}
