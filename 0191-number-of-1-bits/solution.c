int hammingWeight(int n) {
    int ans=0,count=0;
    while (n!=0){//128
       ans=n%2;
       n =n/2; 
       if(ans==1) 
           count++;
    }
    
    return count;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
