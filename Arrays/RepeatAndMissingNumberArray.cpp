#include <iostream>
#include <vector>
/*
You are given a read only array of n integers from 1 to n.

Each integer appears exactly once except A which appears twice and B which is missing.

Return A and B.

Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Note that in your output A should precede B.

Example:

Input:[3 1 2 5 3]

Output:[3, 4]

A = 3, B = 4
*/

vector<int> repeatedNumber(const vector<int> &arr) {

    int len = arr.size();
    vector<char> v;
    vector<int> res;
    for(int i=0;i<len;i++) v.push_back('N');
    //Find Repeating Element
    for(int i=0;i<len;i++){
        if(v[arr[i]-1] == 'N') v[arr[i]-1] = 'Y';
        else res.push_back(arr[i]);
    }
    //Find Missing Element
    for(int i=0;i<len;i++) if(v[i] == 'N') res.push_back(i+1);
    return res;
}

int main(){

    std::vector<int> arr = {5, 6, 2, -15, 9, 0, 1};
    std::cout<<maxSubArray(arr);
}
