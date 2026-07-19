
bool isPalindrome(int x) {
    int y=x;
    int digit;
    long long pal=0;
    
    
    if(x<0)
    {
        return false;
    }
    
    
    
    
    while (x!=0)
    {
        digit=x%10;
        pal=pal*10+digit;
        x=x/10;
        
        
        
    }
    
    
        
        return (pal==y);
    
    
      
}
