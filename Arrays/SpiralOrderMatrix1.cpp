/*

Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.

Example:

Given the following matrix:

[
    [ 1, 2, 3 ],
    [ 4, 5, 6 ],
    [ 7, 8, 9 ]
]
You should return

[1, 2, 3, 6, 9, 8, 7, 4, 5]

//*/
//
//vector<int> Solution::spiralOrder(const vector<vector<int> > &matrix) {
//
//    int rows = matrix.size();
//    if (rows == 0) return vector<int> ();
//    int min_row = 0, min_col = 0, dir = 1, cols = matrix[0].size();
//    int max_row = rows, max_col = cols;
//    vector<int> res;
//    for (int step = 0; step < rows * cols;) {
//        switch(dir) {
//            case 1: for(int i=min_col;i<max_col;i++){
//                    res.push_back(matrix[min_row][i]);
//                    step++;
//                }
//                min_row++;
//                dir = 2;
//                //return res;
//                break;
//            case 2: for(int i=min_row;i<max_row;i++){
//                    res.push_back(matrix[i][max_col-1]);
//                    step++;
//                }
//                max_col--;
//                dir = 3;
//                //return res;
//                break;
//            case 3:
//                for(int i=max_col-1;i>=min_col;i--){ // reach left bound
//                    res.push_back(matrix[max_row-1][i]);
//                    step++;
//                }
//                max_row--;
//                dir = 4;
//                //return res;
//                break;
//            case 4: for (int i=max_row-1;i>=min_row;i--) { // reach upside bound
//                    res.push_back(matrix[i][min_col]);
//                    step++;
//                }
//                min_col++;
//                //return res;
//                break;
//            }
//        }
//    return res;
//}
