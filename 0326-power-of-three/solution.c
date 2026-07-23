bool isPowerOfThree(int n) {
    
    long long num1=n;
    if(num1==0)
    {
     return false;
    }
    if(num1==1)
    {
        return true;
    }
    
    
    //if(num==1)
   // {
   // return true;
    //{
    if(num1%3==0)
    {
        
        while (num1%3==0)
        {
            
           
    
        
        if(num1==3) 
           {
               return true;
           }
           num1=num1/3;
           
           }        
           
          
    }
   
    
    return false;
}
