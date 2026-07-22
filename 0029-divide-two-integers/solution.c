int divide(int dividend, int divisor) {
long long d=dividend;
long long d1= divisor;
long long  div;
if(d==INT_MIN && d1==-1)
{
return INT_MAX;
}
div=d/d1;
return div;
    
    
}
