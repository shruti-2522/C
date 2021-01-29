//WRITE A C PROGRAME TO CHECK WHETEEHER A NUBER IUS POSSITIVE OR NEGATIVE:

#include<stdio.h>
main()
{
    int a;

    a=printf("Enter a number");
    scanf("%d",&a);

    if(a>0)
    {
       printf("a is Possitive Number");
    }
    else
    {
         printf("a is Non-Possitive Number");
    }
    getch();

}

/*OUTPUT:
Enter a number-5
a is Non-Possitive Number
*/
