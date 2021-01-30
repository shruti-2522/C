//ARRAY:

main()
{
int a[10],sum,i;
float avg;

printf("\n ENTER 10 NUMBERS:");
for(i=0;i<=9;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;i<=9;i++)
{
    sum=sum+a[i];
   // printf("SUM=%d",sum
}
 printf("\n SUM=%d",sum);

avg=sum/10.0;
printf("\n AVERAGE=%d",avg);
}
/*OUTPUT:

 ENTER 10 NUMBERS:1
2
3
4
5
6
7
8
9
7

 SUM=52
 AVERAGE=-1073741824
 */

