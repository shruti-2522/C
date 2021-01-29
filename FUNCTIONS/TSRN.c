//TAKES SOMETHINMG RETRURNS NOTHING

#include<stdio.h>
#include<conio.h>

void add(int, int);
void main()
{
int a,b;
printf("Enter Any Two Numbers:");
scanf("%d %d",&a,&b);
add(a,b);

}

 add(int x,int y)
{
int c;
c=x+y;
printf("ADDITION=%d",c);
}

/*OUTPUT:
Enter Any Two Numbers:6 7
ADDITION=13
*/
