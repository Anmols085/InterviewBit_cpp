/*
Given a sorted array of integers, find the starting and ending position of a given target value.

Your algorithm’s runtime complexity must be in the order of O(log n).

If the target is not found in the array, return [-1, -1].

Example:

Given [5, 7, 7, 8, 8, 10]

and target value 8,

return [3, 4].
*/

vector<int> Solution::searchRange(const vector<int> &A, int B) {

    int n=A.size(), i=0, j=n-1, mid=(i+j)/2;
    vector<int> ans(2, -1);
    while(i<j){
        mid=(i+j)/2;
        if(A[mid]<B) i=mid+1;
        else j=mid;
    }
    if(A[i]!=B) return ans;
    else ans[0]=i;
    j=n-1;
    while(i<j){
        mid=(i+j)/2 + 1;
        if(A[mid]>B) j=mid-1;
        else i=mid;
    }
    ans[1]=j;
    return ans;
}
