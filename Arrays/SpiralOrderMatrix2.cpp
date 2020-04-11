/*

Given an integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.

Example:

Given n = 3,

You should return the following matrix:
 [ [ 1, 2, 3 ], [ 8, 9, 4 ], [ 7, 6, 5 ] ]

*/

vector<vector<int>> generateMatrix(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<int> > res(A);
    for(int i=0; i<A; i++) res[i].resize(A);

    int top = 0, bottom = A-1, left = 0, right = A-1, n = 1;
    while(n <= A*A){
        for(int i=left; i<=right; i++) res[top][i] = n++;
        top++;
        for(int i=top; i<=bottom; i++) res[i][right] = n++;
        right--;
        for(int i=right; i>=left; i--) res[bottom][i] = n++;
        bottom--;
        for(int i=bottom; i>=top; i--) res[i][left] = n++;
        left++;
    }
    return res;
}
