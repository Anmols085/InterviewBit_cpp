/*
Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target.
Return the sum of the three integers.

Assume that there will only be one solution

Example:
given array S = {-1 2 1 -4},
and target = 1.

The sum that is closest to the target is 2.
*/

int Solution::threeSumClosest(vector<int> &A, int B) {

    int n=A.size(), l, r, temp, dif, min_dif=INT_MAX, ans;
    sort(A.begin(), A.end());
    for(int i=0;i<n-2;i++){
        l=i+1, r=n-1;
        while(l<r){
            temp=A[i]+A[l]+A[r];
            dif=abs(temp-B);
            if(dif==0) return B;
            if(dif<min_dif) min_dif=dif, ans=temp;
            if(temp<B) l++;
            else r--;
        }
    }
    return ans;
}
