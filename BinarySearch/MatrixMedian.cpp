/*
Given a N cross M matrix in which each row is sorted, find the overall median of the matrix. Assume N*M is odd.

For example,

Matrix=
[1, 3, 5]
[2, 6, 9]
[3, 6, 9]

A = [1, 2, 3, 3, 5, 6, 6, 9, 9]

Median is 5. So, we return 5.
Note: No extra memory is allowed.
*/

int Solution::findMedian(vector<vector<int>> &A) {
    int min=INT_MAX, max=INT_MIN, r=A.size(), c=A[0].size();
    for(int i=0;i<r;i++) {
        if(A[i][0]<min) min=A[i][0];
        if(A[i][c-1]>max) max=A[i][c-1];
    }
    int median = (1+r*c)/2;
    while(min<max) {
        int count=0, mid = min+(max-min)/2;
        for(int i=0;i<r;i++){
            //int c=upper_bound(A[i].begin(),A[i].end(),mid);
            //cout<<upper_bound(A[i].begin(),A[i].end(),mid)<<" "<<A[i].begin()<<endl;
            count+=upper_bound(A[i].begin(),A[i].end(),mid)-(A[i].begin());
        }
        if(count<median) min = mid+1;
        else max = mid;
    }
    return min;
}
