#include <iostream>
#include <vector>
#include "Utils.h"
/*

Given a non-negative number represented as an array of digits,

add 1 to the number ( increment the number represented by the digits ).

The digits are stored such that the most significant digit is at the head of the list.

Example:

If the vector has [1, 2, 3]

the returned vector should be [1, 2, 4]

as 123 + 1 = 124.

 NOTE: Certain things are intentionally left unclear in this question which you should practice asking the interviewer.
For example, for this problem, following are some good questions to ask :
Q : Can the input have 0’s before the most significant digit. Or in other words, is 0 1 2 3 a valid input?
A : For the purpose of this question, YES
Q : Can the output have 0’s before the most significant digit? Or in other words, is 0 1 2 4 a valid output?
A : For the purpose of this question, NO. Even if the input has zeroes before the most significant digit.

*/

std::vector<int> plusOne(std::vector<int> &arr) {

    int len = (int)arr.size(), carry = 0;
    std::vector<int> res;
    res.push_back((1+arr[len-1])%10);
    carry = (1+arr[len-1])/10;
    for(int i=len-2;i>=0;i--){
        res.push_back((carry+arr[i])%10);
        carry = (carry+arr[i])/10;
    }
    if(carry==1) res.push_back(carry);
    int x = res.size();
    for(int i=0;i<x/2;i++) std::swap(res[i],res[x-i-1]);
    while(res[0] == 0) res.erase(res.begin());
    return res;
}

int main_add(){

    std::vector<int> arr = {5, 6, 2, 11, 9, 0, 1};
    //printVector(plusOne(arr));
    return 0;
}
