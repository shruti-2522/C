//TAKES NOTHING RETURNS SOMETHING

#include<conio.h>
#include<stdio.h>
void main()
{
//FUNCTION DEFINATION/PROTOTYPE
void add(void);
//FUNCTION CALL
add();
getch();
}

//FUNCTION DEFINATION
void add()
{
int a,b,c;
printf("\n ENTER ANY TWO NUMBERS:");
scanf("%d %d",&a,&b);
c=a+b;
printf("\n SUM=%d",c);
}


/*output:

 ENTER ANY TWO NUMBERS:5 6

 SUM=11

*/
