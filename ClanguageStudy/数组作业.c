#include <stdio.h>
#include <string.h>
#include <math.h>

// void Down()
// {
//      char c[26];
//  int i=0;
//  while (i<26)
//  {
//     c[i]=getchar();
//     getchar();
//     i++;
//  }
//  for (int i = 0; i < 26; i++)
//  {
//     c[i]=c[i]+32;
//  }
//  for (int i = 0; i < 26; i++)
//  {
//    printf("%c",c[i]);
//  }
//  printf("\n");
// }

// void Printf1()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             printf("$");
//         }
//         printf("\n");
//     }
// }

// void Printf2()
// {
//  for (int i = 1; i <= 6; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             printf("%c",'F'-j);
//         }
//         printf("\n");
//     }
// }

// void Sum()
// {
//     int arry[10]={0};
//     int b[9]={0};
//     for (int i = 0; i < 10; i++)
//     {

//         scanf("%d",&arry[i]);
//     }

//     for (int i = 0; i < 9; i++)
//     {
//         b[i]=arry[i]+arry[i+1];
//     }
//     int count=1;
//      for (int i = 0; i < 9; i++)
//     {
//        printf("%d\t  ",b[i]);
//        if (count%3==0)
//        {
//         putchar('\n');
//        }
//        count++;
//     }
// }

// int Printf3(int *p,int x)
// {
// if (x==0)
// {
//     return 0;
// }
// Printf3(p+1,x-1);
// printf("%d\n",*p);
// }

// void RevesePrintf()
// {
//        int arry[10]={0};
//            for (int i = 0; i < 10; i++)
//     {

//         scanf("%d",&arry[i]);
//     }
//     Printf3(arry,10);
// }

// void DownPrintf()
// {
//     int arry[4][4];
//     for (int i = 0; i < 4; i++)
//     {
//        for (int j = 0; j < 4; j++)
//        {
//         scanf("%d",&arry[i][j]);
//        }
//     }
//         for (int i = 0; i <4; i++)
//     {
//        for (int j = 0; j <=i; j++)
//        {
//         printf("%d \t",arry[i][j]);
//        }
//        printf("\n");
//     }
// }


// void X0Printf()
// {
//     char a[30] = "0123456789ABCDEF";
// 	char b[32];
// 	int n;
// 	int cnt=0;

// 	scanf("%d", &n);

// 	if (n == 0)
// 		printf("0");
// 	while (n != 0)
// 	{
// 		b[++cnt] = a[n % 16];
// 		n = n / 16;
// 	}

// 	for (int i = cnt; i > 0; i--)
// 		{
//             printf("%c", b[i]);
//         }
//         printf("\n");
// }

// void Sum0()
// {
//     char ch;
//     int down = 0;
//     int up = 0;
//     int number = 0;
//     int other = 0;
//     while ((ch = getchar()) != '\n')
//     {
//         if ((ch >= 'a') && (ch <= 'z'))
//         {
//             down++;
//         }
//         else if ((ch >= 'A') && (ch <= 'Z'))
//         {
//             up++;
//         }
//         else if ((ch >= '0') && (ch <= '9'))
//         {
//             number++;
//         }
//         else
//         {
//             other++;
//         }
//     }
//     printf("大写字母=%d 小写字母=%d 数字=%d  其他=%d", up, down, number, other);
// }

// void Sum1()
// {
//     int num[26] = { 0 };
//     char ch='0';
//     while (ch!='#')
//     {
//         ch = getchar();
//         for (int i = 0; i < 26; i++)
//         {
//             if (ch == 'A' + i)
//             {
//                 num[i]++;
//             }
//         }
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         printf("%d\t", num[i]);
//     }
// }

int main()
{

    //  Down();
    // Printf1();
    // Printf2();
    // Sum();
    // RevesePrintf();
    // DownPrintf();
    // X0Printf();
    // Sum0();
    // Sum1();
    return 0;
}