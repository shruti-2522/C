//WRITE A C PROGRAME TO PRINT SUM OF EVEN NUMBERS AND SUM OF ODD NUMBERS(ONE DIMENSIONAL ARRAY)
#include<stdio.h>
main()
{
    int a[10],i,se=0,so=0;

    printf("ENTER 10 NUMBERS:");
    for(i=0;i<=9;i++)
      scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
         if(a[i]%2==0)
         se=se+a[i];
         else
         so=so+a[i];
    }


   printf("\n SUM OF EVEN NUMBERS=%d",se);
   printf("\n SUM OF ODD NUMBERS=%d",so);

}
/*OUTPUT:
ENTER 10 NUMBERS:1
2
3
4
5
5
6
7
8
9

 SUM OF EVEN NUMBERS=20
 SUM OF ODD NUMBERS=30
 */
