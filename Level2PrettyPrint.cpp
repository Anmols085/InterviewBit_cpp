/*
Print concentric rectangular pattern in a 2d matrix.
Let us show you some examples to clarify what we mean.

Example 1:

Input: A = 4.
Output:

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
Example 2:

Input: A = 3.
Output:

3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3
*/

vector<vector<int> > Solution::prettyPrint(int A) {

    int n = A*2-1;
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        vector<int> temp(n, 0);
        for(int j=0;j<n;j++){
            if(abs(i-n/2)>abs(j-n/2)) temp[j] = abs(i-n/2) + 1;
            else temp[j] = abs(j-n/2)+1;
        }
        ans.push_back(temp);
    }
    return ans;
}
