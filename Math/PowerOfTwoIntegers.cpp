/*

Given a positive integer which fits in a 32 bit signed integer, find if it can be expressed as A^P
where P > 1 and A > 0. A and P both should be integers.

Example

Input : 4
Output : True
as 2^2 = 4.

*/

int Solution::isPower(int A) {

    if(A<=1) return 1;
    long long int p;
    for(int i=2;i<=sqrt(A);i++){
        p=1;
        while(true){
            p=p*i;
            if(p==A) return 1;
            else if(p>A) break;
        }
    }
    return 0;
}
