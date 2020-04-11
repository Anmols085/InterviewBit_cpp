
//https://www.interviewbit.com/problems/pascal-triangle-rows/
/*

Given numRows, generate the first numRows of Pascal’s triangle.

Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

Example:

Given numRows = 5,

Return

[
     [1],
     [1,1],
     [1,2,1],
     [1,3,3,1],
     [1,4,6,4,1]
]

*/

vector<vector<int> > generate(int A) {
    if (A == 0) { return {}; }
    vector<vector<int>> r(A);
    r[0].push_back(1);
    for (int i = 1; i < A; ++i) {
        r[i].push_back(1);
        for (int j = 1; j < i; ++j) {
            r[i].push_back(r[i-1][j] + r[i-1][j-1]);
        }
        r[i].push_back(1);
    }
    return r;
}
