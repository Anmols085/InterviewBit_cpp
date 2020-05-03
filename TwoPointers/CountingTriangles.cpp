/*
You are given an array of N non-negative integers, A0, A1 ,…, AN-1.
Considering each array element Ai as the edge length of some line segment, count the number of triangles which you can form using these array values.

Notes:

You can use any value only once while forming each triangle. Order of choosing the edge lengths doesn’t matter. Any triangle formed should have a positive area.

Return answer modulo 109 + 7.

For example,

A = [1, 1, 1, 2, 2]

Return: 4
*/

int Solution::nTriang(vector<int> &A) {

    sort(A.begin(), A.end());
    int j, k, n=A.size(), temp, ans=0, mod=pow(10, 9)+7;
    long int two_sides, third;
    for(int k=n-1;k>=0;k--){
        int i=0, j=k-1;
        while(i<j){
            if(A[i]+A[j]>A[k]){
                ans=(ans+(j-i)%mod)%mod;
                j--;
            }
            else i++;
        }
    }
    return ans;
}
