//TAKES SOMETHING RETURNS SOMETHING:

#include<stdio.h>
#include<conio.h>

int add(int,int);
main()
{
 int a,b,s;
 printf("Enter Any Two Numbers");
 scanf("%d %d",&a,&b);
 s=add(a,b);//call by value
 printf("SUM=%d",s);
}

int add(int x,int y)//CALL BY REFRENCE
{
    int c;
    c=x+y;
    return(c);
}


/*OUTPUT:
Enter Any Two Numbers 5 6
SUM=11
*/
