/*
You have to paint N boards of length {A0, A1, A2, A3 … AN-1}. There are K painters available and you are also given how much time a painter takes to paint 1 unit of board. You have to get this job done as soon as possible under the constraints that any painter will only paint contiguous sections of board.

2 painters cannot share a board to paint. That is to say, a board
cannot be painted partially by one painter, and partially by another.
A painter will only paint contiguous boards. Which means a
configuration where painter 1 paints board 1 and 3 but not 2 is
invalid.
Return the ans % 10000003

Input :
K : Number of painters
T : Time taken by painter to paint 1 unit of board
L : A List which will represent length of each board

Output:
     return minimum time to paint all boards % 10000003
Example

Input :
  K : 2
  T : 5
  L : [1, 10]
Output : 50
*/

int painterNeeded(int mid, vector<int> &C){
    int count=1;
    long long int sum=0;
    for(int i=0;i<C.size();i++){
        if(sum+C[i]>mid){
            sum=C[i];
            count++;
            if(C[i]>mid) return INT_MAX;
        }
        else sum+=C[i];
    }
    return count;
}

int Solution::paint(int A, int B, vector<int> &C){

    long long int low=LONG_MAX, high=0, ans, mid;
    for(int i=0;i<C.size();i++){
        low=min(low, (long long)C[i]);
        high+=C[i];
    }
    while(low<=high){
        mid=low+(high-low)/2;
        if(painterNeeded(mid, C)<=A) ans=mid, high=mid-1;
        else low=mid+1;
    }
    return (ans*B)%10000003;
}
