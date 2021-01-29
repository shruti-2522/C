//SIZEOF OPERATOR
main()
{
    //sizzeof(datetype)
    int x,y,z,h;
    x=sizeof(int);
    y=sizeof(float);
    z=sizeof(char);
    h=sizeof(double);
    printf("%d,%d,%d,%d",x,y,z,h);

    //sizeof(variable)
    int a,b,c;
     a=sizeof(1);
     b=sizeof(3.45);
     c=sizeof('a');
     printf("%d %d %d" ,a,b,c);}

//OUTPUT:
//4,4,1,8 4 8 4
