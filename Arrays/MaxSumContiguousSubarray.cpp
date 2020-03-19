#include <iostream>
#include <vector>
/*

Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

For example:

Given the array [-2,1,-3,4,-1,2,1,-5,4],

the contiguous subarray [4,-1,2,1] has the largest sum = 6.

For this problem, return the maximum sum.

*/

int maxSubArray(const std::vector<int> &arr) {
    std::cout<<"Inside Max Sub Array\n";
    int len = arr.size(), max_sum = arr[0], temp_sum = arr[0];
    for(int i=1;i<len;i++){
        temp_sum=std::max(temp_sum+arr[i], arr[i]);
        if(temp_sum>max_sum) max_sum = temp_sum;
    }
    return max_sum;
}

int main_max_sum_contiguous(){

    std::vector<int> arr = {5, 6, 2, -15, 9, 0, 1};
    std::cout<<maxSubArray(arr);
}
