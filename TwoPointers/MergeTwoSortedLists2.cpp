/*
Given two sorted integer arrays A and B, merge B into A as one sorted array.
Input :
         A : [1 5 8]
         B : [6 9]

Modified A : [1 5 6 8 9]
*/
void Solution::merge(vector<int> &A, vector<int> &B) {

    int n=A.size(), m=B.size(), i=0, j=0;
    vector<int> ans;
    while(i<n && j<m)
        if(A[i]<B[j]) ans.push_back(A[i++]);
        else ans.push_back(B[j++]);
    while(i<n) ans.push_back(A[i++]);
    while(j<m) ans.push_back(B[j++]);

    A=ans;
}
