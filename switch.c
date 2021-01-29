#include<stdlib.h>
#include<stdio.h>
main()
{
    int ch,a,b,c;
    while(1)
    {
     printf("\n 1 :ADDITION");
     printf("\n 2:EVEN AND ODD");
     printf("\n 3:PRINT N NUMBERS");
     printf("\n 4:EXIT");


     printf("\n Enter any choice");
     scanf("%d",&ch);

     switch(ch)
     {
 case 1:
     printf("Enter any two numbers");
     scanf("%d %d",&a,&b);
     c=a+b;
     printf("\n sum=%d",c);
     break;

 case 2:
    printf("Enter any number");
    scanf("%d",&a);
    if(a%2==0)
        printf("Even Number");
    else
        printf("Odd Number");
    break;

 case 3:
       printf("Enter any number");
       scanf("%d",&a);

       for(b=1;b<a;b++)
       {
           printf("\n %d",b);
       }
       break;
       case 4:exit(0);

       default:
        printf("INVALD CHOICE");
}}       }
/*OUTPUT:

Enter any choice1
Enter any two numbers3 4

 sum=7
 1 :ADDITION
 2:EVEN AND ODD
 3:PRINT N NUMBERS
 4:EXIT
 Enter any choice2
Enter any number56
Even Number
 1 :ADDITION
 2:EVEN AND ODD
 3:PRINT N NUMBERS
 4:EXIT
 Enter any choice3
Enter any number5

 1
 2
 3
 4
 1 :ADDITION
 2:EVEN AND ODD
 3:PRINT N NUMBERS
 4:EXIT
 Enter any choice4*/
