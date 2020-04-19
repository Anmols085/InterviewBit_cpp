
/*
Reverse digits of an integer.

Example1:

x = 123,

return 321
Example2:

x = -123,

return -321

Return 0 if the result overflows and does not fit in a 32 bit signed integer
*/

int Solution::reverse(int A) {

    int flag=1, R=0, digit=0, roof=214748364;
    if(A<0){
        flag=-1;
        A=A*(-1);
    }
    while(A){
        digit = A%10;
        if (R>roof||(R==roof&&digit>(7))) return 0;
        R=R*10+A%10;
        A/=10;
    }
    return R*flag;
}
