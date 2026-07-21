bool isPerfectSquare(int num) {
   long long y;
    if(num==1)
{
    return true;
}
long long i;
for(i=2;i<=num/2;i++)
{     y=i*i;
    if(i*i==num)
    {
        return true;
    }
}
return false;

}
