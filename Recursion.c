//RECURSION PROGRAM
main()
{
    int no;
    no=sum(10);
    printf("%d",no);
}

int sum(int a)
{
    int s;
    if(a==1)
        return a;
    s=a+sum(a-1);
    return s;

}

/*OUTPUT:
55
*/
