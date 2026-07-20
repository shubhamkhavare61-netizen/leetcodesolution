bool isHappy(int n) {

    int digit;
    int rev;
    int rev1;
    while (n!=1)
    {
        if(n==4)
        {return false;}

      rev1=0;
    while (n>0)
    {
        digit=n%10;
        rev=digit*digit;
        rev1=rev+rev1;
        n=n/10;
    }
            n=rev1;
        }
        
            return true;
           
    

     

    
}
