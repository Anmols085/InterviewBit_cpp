/*
Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Here are few examples.

[1,3,5,6], 5 → 2
[1,3,5,6], 2 → 1
[1,3,5,6], 7 → 4
[1,3,5,6], 0 → 0

*/

int Solution::searchInsert(vector<int> &A, int B) {

    if(A[0]>B) return 0;
    int n=A.size(), s=0, e=n-1, m=s+(e-s)/2;
    while(s<=e){
        m=s+(e-s)/2;
        if(A[m]==B||(B<A[m]&&B>A[m-1])) return m;
        else if(B>A[m]) s=m+1;
        else e=m-1;
    }
    return n;
}
