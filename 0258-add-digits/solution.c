int addDigits(int num) {
    long long n=num;
    long long sum=0;
    int digit;
    while (n>=0||n<=0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
        
        
        if(n==0)
        {
            n=sum;
            sum=0;
        
        if(n<10)
        {
            return n;
        }
        }
        
        
        
    }
    
    
}
