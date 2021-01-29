
//FUNCTIONS

main()
{
 //USER-DEFINED FUNCTIONS / FUNCTION CALL
 add();
 isEven();
 add();
 //PRE-DEFINED FUNCTIONS
 getch();
}

//FUNCTION DEFINATION
add()
{
int a,b,c;
printf("\n Enter Any two Numbers");
scanf("%d %d",&a,&b);
c=a+b;
printf("\n ADDITION=%d",c);
}

isEven()
{
    int n;
    printf("\n Enter Any Number");
    scanf("%d",&n);
    if(n%2==0)
        printf("\n EVEN NO");
    else
        printf("\n ODD NO");
}


/*OUTPUT:

 Enter Any two Numbers 4 5

 ADDITION=9
 Enter Any Number 6

 EVEN NO
 Enter Any two Numbers 4 5

 ADDITION=9
*/
