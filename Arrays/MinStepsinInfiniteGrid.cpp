#include <iostream>
#include <vector>

/*
You are in an infinite 2D grid where you can move in any of the 8 directions :

 (x,y) to
    (x+1, y),
    (x - 1, y),
    (x, y+1),
    (x, y-1),
    (x-1, y-1),
    (x+1,y+1),
    (x-1,y+1),
    (x+1,y-1)
You are given a sequence of points and the order in which you need to cover the points. Give the minimum number of steps in which you can achieve it. You start from the first point.

Example :

Input : [(0, 0), (1, 1), (1, 2)]
Output : 2
It takes 1 step to move from (0, 0) to (1, 1). It takes one more step to move from (1, 1) to (1, 2).

*/

// Input : X and Y co-ordinates of the points in order.
// Each point is represented by (X[i], Y[i])


int coverPoints(std::vector<int> &arr, std::vector<int> &brr) {
    int len = (int)arr.size();
    if(len == 1) return 0;
    int ans = 0;
    for(int i=1;i<len;i++){
        ans = ans + std::max(abs(arr[i] - arr[i-1]), abs(brr[i]-brr[i-1]));
    }
    return ans;
}

int main_steps(){

    std::vector<int> arr = {5, 6, 2, 11, 9, 0, 1};
    std::vector<int> brr = {1, 2, 3, 4, 5, 6, 7};
    std::cout<<coverPoints(arr, brr);
    return 0;
}
