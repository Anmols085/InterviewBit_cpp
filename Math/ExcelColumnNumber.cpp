/*

Given a column title as appears in an Excel sheet, return its corresponding column number.

Example:

    A -> 1

    B -> 2

    C -> 3

    ...

    Z -> 26

    AA -> 27

    AB -> 28

  */

  int Solution::titleToNumber(string A) {

    int n=A.length(), count=0, ans=0;
    for(int i=n-1;i>=0;i--)
        ans = ans+((int)A[i]-64)*pow(26, count++);
    return ans;
}
