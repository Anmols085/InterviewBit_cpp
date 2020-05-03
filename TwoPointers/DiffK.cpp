/*
Given an array ‘A’ of sorted integers and another non negative integer k, find if there exists 2 indices i and j such that A[i] - A[j] = k, i != j.

 Example: Input :
    A : [1 3 5]
    k : 4
 Output : YES as 5 - 1 = 4
Return 0 / 1 ( 0 for false, 1 for true ) for this problem

Try doing this in less than linear space complexity.
*/

int Solution::diffPossible(vector<int> &A, int B) {

    int i=0, j=1, n=A.size(), temp;
    while(i<n&&j<n){
        temp=A[j]-A[i];
        if(i!=j && temp==B) return 1;
        else if(temp<B) j++;
        else i++;
    }
    return 0;
}
