//MULTIPLICATION OF TWO MATRACIES:
main()
{
 int a[3][3],b[3][3],c[3][3],i,j,k,sum;

 printf("\n ENTER ELEMENT OF FIRST MATRIX:");
 for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
     scanf("%d",&a[i][j]);

 printf("\n ENTER ELEMENT OF SECOND MAATRIX:");
 for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
    scanf("%d",&b[i][j]);

 for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
    {
        sum=0;
        for(k=0;k<=2;k++)
            sum=a[k][i]*b[k][j];
        c[i][j]=sum;

    }
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++){

        printf("\n MULTIPLICATION=%d",c[i][j]);
        printf("\n");
}


}

/*OUTPUT:

 ENTER ELEMENT OF FIRST MATRIX:1
2
3
4
5
6
7
8
9

 ENTER ELEMENT OF SECOND MAATRIX:1
2
44
4
5
6
7
8
9

 MULTIPLICATION=49

 MULTIPLICATION=56

 MULTIPLICATION=63

 MULTIPLICATION=56

 MULTIPLICATION=64

 MULTIPLICATION=72

 MULTIPLICATION=63

 MULTIPLICATION=72

 MULTIPLICATION=81
*/
