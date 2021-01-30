//Write a program to find greatest among 10 numbers
main()
{
int  a[10],i,max;
printf("ENTER 10 NUMBERS:");
for(i=0;i<=9;i++)
    scanf("%d",&a[i]);

    max=a[0];
    for(i=0;i<=9;i++)
    if(max<a[i])
     max=a[i];
     printf("MAX=%d",max);
}


/*OUTPUT:
ENTER 10 NUMBERS:3
4
56
789
46
34
45
34
23
345
MAX=789
*/
