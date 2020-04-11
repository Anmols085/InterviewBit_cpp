/*
Given an integer n, return the number of trailing zeroes in n!.

Note: Your solution should be in logarithmic time complexity.

Example :

n = 5
n! = 120
Number of trailing zeros = 1
So, return 1
*/

int Solution::trailingZeroes(int n) {

    int count=0;
    if(n<5) return 0;
    while(n>=5){
        count += n/5;
        n=n/5;
    }
    return count;
}
