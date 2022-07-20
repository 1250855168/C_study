#include<stdio.h>
 int main()
 {
    int a;
   int r= scanf("%d",&a);
   int i=1;
    while (r==0)
    {
        getchar();
        if (i==1)
        {
            printf("please again!!\n");
            i++;
        }
        r=scanf("%d",&a);
    }  
    printf("%d\n",a);
    return 0;
 }