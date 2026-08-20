int arrangeCoins(int n) {
    int k=0;
    for(int i=1;n>=0;i++){
     n=n-i;
     k++;
   }
    return k-1;
}
