bool checkPerfectNumber(int num) {
 
unsigned long long n=num;
int i;
if(n==1)
{return false;}
int count=1;
for(i=2;i<=n/2;i++)
{
    if(n%i==0)
    {
        count=count+i;
    }
}
if(count==n)
{
    return true;
}
return false;
}
