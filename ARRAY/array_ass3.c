//Write a program to find smallest among 10 numbers
main()
{
int a[10],min,i;

printf("\n ENTER 10 NUMBERS:");
for(i=0;i<=9;i++)
    scanf("%d",&a[i]);

    min=a[0];
    for(i=0;i<=9;i++)
    if(min>a[i])
        min=a[i];
    printf("MINIMUM NUMBERS IS=%d",min);
}

/*OUTPUT:

 ENTER 10 NUMBERS:3
4
0
2
3
345
56
78
90
67
MINIMUM NUMBERS IS=0*/
