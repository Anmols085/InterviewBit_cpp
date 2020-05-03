/*
Divide two integers without using multiplication, division and mod operator.

Return the floor of the result of the division.

Example:

5 / 2 = 2
*/
int Solution::divide(int A, int B) {

    long long a=A, b=B, q=0, t=0;
    int sign=(a<0^b<0)?-1:1;
    a=abs(a), b=abs(b);
    for(long long i=31;i>=0;i--)
        if(t+(b<<i)<=a) t+=b<<i, q|=1LL<<i;
    if(sign<0) q*=-1;
    return (q>=INT_MAX||q<INT_MIN)?INT_MAX:q;
}
