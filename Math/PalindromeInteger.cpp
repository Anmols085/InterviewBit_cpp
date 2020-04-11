/*
Determine whether an integer is a palindrome. Do this without extra space.

A palindrome integer is an integer x for which reverse(x) = x where reverse(x) is x with its digit reversed.
Negative numbers are not palindromic.

Example :

Input : 12121
Output : True

Input : 123
Output : False

*/

int Solution::isPalindrome(int A) {

    if(A<0) return 0;
    int R=0, O=A;
    while(A){
        R=R*10+A%10;
        A/=10;
    }
    if(R==O) return 1;
    return 0;
}
