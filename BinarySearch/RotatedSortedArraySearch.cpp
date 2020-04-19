int Solution::search(const vector<int> &A, int B) {

    int n=A.size(), low=0, high=n-1, mid=low+(high-low)/2;
    while(low<=high){
        mid=low+(high-low)/2;
        if(A[mid]==B) return mid;
        else if(A[0]<=A[mid]){
            if(A[0]<=B && B<A[mid]) high=mid-1;
            else low=mid+1;
        }
        else{
            if(A[mid]<B && B<=A[n-1]) low=mid+1;
            else high=mid-1;
        }
    }
    return -1;
}
