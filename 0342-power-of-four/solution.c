bool isPowerOfFour(int n) {
    long long n1=n;
    if(n1==1)
    {
        return true;
    }
    else if(n1==0)
    {
        return false;
    }
    while (n1%4==0)
    {
        if(n1==4)
        {
        return true;
        }
        n1=n1/4;
    }
    return false;
}
