/*
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Example:

"A man, a plan, a canal: Panama" is a palindrome.

"race a car" is not a palindrome.

Return 0 / 1 ( 0 for false, 1 for true ) for this problem

*/

int Solution::isPalindrome(string A) {

    int i=0, j=A.length()-1;
    while(i<j){
        if(isalnum(A[i]) && isalnum(A[j])){
            if(tolower(A[i])==tolower(A[j])){
                i++; j--;
            }
            else return 0;
        }
        if(!isalnum(A[i])) i++;
        if(!isalnum(A[j])) j--;
    }
    return 1;
}
