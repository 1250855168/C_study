#include<stdio.h>
#include<math.h>


int main()
{
    int i=0;
    int j=0;
    int x=0;
    int n=0;
    int m=0;
    for (i = 100; i < 1000; i++)
    {
        j=i%10;
        x=i/10%10;
        n=i/100;
        if (i==j*j*j+x*x*x+n*n*n)
        {
           printf("%d是水仙花数\n",i);
        }  
    }
        for (i = 1000; i < 10000; i++)
    {
        j=i%10;
        x=i/10%10;
        n=i/100%10;
        m=i/1000;
        if (i==j*j*j+x*x*x+n*n*n+m*m*m)
        {
           printf("%d是水仙花数\n",i);
        }  
    }
    
    return 0;
}