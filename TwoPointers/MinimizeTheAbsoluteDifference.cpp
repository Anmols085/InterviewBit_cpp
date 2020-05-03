/*
Given three sorted arrays A, B and Cof not necessarily same sizes.

Calculate the minimum absolute difference between the maximum and minimum number from the triplet a, b, c such that a, b, c belongs arrays A, B, C respectively.
i.e. minimize | max(a,b,c) - min(a,b,c) |.
Example :

Input:

A : [ 1, 4, 5, 8, 10 ]
B : [ 6, 9, 15 ]
C : [ 2, 3, 6, 6 ]
Output:

1
*/

int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {

    int n=A.size(), m=B.size(), o=C.size();
    int i=0, j=0, k=0;
    int ans=INT_MAX, min_temp, max_temp;
    while(i<n && j<m && k<o){
        min_temp=min({A[i], B[j], C[k]});
        max_temp=max({A[i], B[j], C[k]});
        ans=min(ans, abs(max_temp-min_temp));
        if(A[i]==min_temp) i++;
        else if(B[j]==min_temp) j++;
        else k++;
    }
    return ans;
}
