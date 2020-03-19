#include <iostream>
#include <vector>
#include "Utils.h"

using namespace std;

void BubbleSort(vector<int> &arr)
{
    cout<<"\n:::::::Bubble Sorting::::::\n\n";
    int len = (int)arr.size();
    for(int i=0;i<len;i++){
        bool swapped = false;
        for(int j=0;j<len-i-1;j++){
            if(arr[j] > arr[j+1])swap(arr[j], arr[j+1]);
            swapped = true;
        }
        printVector(arr);
        if(swapped){cout<<"Swapped, ";}
        else break;
    }
}

int main_bubble()
{
    vector<int> arr = {5, 6, 2, 11, 9, 0, -1};
    cout << "\nUnsorted Data: ";
    printVector(arr);
    BubbleSort(arr);
    cout << "\nSorted Data: ";
    printVector(arr);
    return 0;
}
