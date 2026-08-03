int climbStairs(int n) {
int i, x = 0, y = 1, z;
 for (i = 1; i<=n; i++){
        z=x+y;
        x=y;
        y=z;
        
}
 return y;
}
