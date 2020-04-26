/*
Given the array of strings A,
you need to find the longest string S which is the prefix of ALL the strings in the array.

Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1
and S2.

For Example, longest common prefix of "abcdefgh" and "abcefgh" is "abc".
*/

string Solution::longestCommonPrefix(vector<string> &A) {

    sort(A.begin(), A.end());
    int n=A.size(), end=min(A[0].length(), A[n-1].length()), i=0;
    while(i<end && A[0][i]==A[n-1][i]) i++;
    return A[0].substr(0, i);
}
