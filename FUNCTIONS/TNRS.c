//TAKES NOTHING RETURNS SOMETHING:
#include<stdio.h>
#include<conio.h>

int add(void);
void main()
{
    int s;
    s=add();
    printf("sum=%d",s);
    getch();
}

int add()
{
     int a,b,c;
    printf("Enter any two numbers:");
    scanf("%d %d",&a,&b);
    return(a+b);
}

/*OUTPUT:
Enter any two numbers:5 6
sum=11

*/
