#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[11],i;
    scanf("%s",a);
    if(a[8]=='P' && (a[0]!='1' || a[1]!='2'))
    {
        a[0]=a[0]+1;
        a[1]=a[1]+2;
        for(i=0;i<8;i++)
            printf("%c",a[i]);
    }
    else if(a[8]=='P' && a[0]=='1' && a[1]=='2')
    {
        a[0]='1';
        a[1]='2';
        for(i=0;i<8;i++)
            printf("%c",a[i]);
    }
    else if(a[8]=='A' && a[0]=='1' && a[1]=='2')
    {
        a[0]='0';
        a[1]='0';
        for(i=0;i<8;i++)
            printf("%c",a[i]);
    }
    else
    {
        for(i=0;i<8;i++)
            printf("%c",a[i]);
    }
    return 0;
}
