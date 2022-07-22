int Solution::pow(int x, int n, int d) {
    
    if(x==0) return 0;
    long long ans=1, a=x;
    while(n>0){
        if(n&1)
          ans=(ans*a)%d;
        n=n>>1;
        a=(a*a)%d;
    }
    return (d+ans)%d;
    
}
