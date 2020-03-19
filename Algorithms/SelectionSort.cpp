#include <iostream>
#include <vector>
#include "Utils.h"

using namespace std;

void selectionSort(vector<int> &A) {
    cout<<"\nSelection sort\n";
    int j, len = (int)A.size(), min_index;
    for(int i = 0; i < len; i++) {
        j = i + 1;
        min_index = i;
        for(;j<len;j++){
            if(A[min_index] > A[j]){
                min_index = j;
            }
        }
        if(i!=min_index) swap(A[i], A[min_index]);
        printVector(A);
    }
}

int main_selection() {
    vector<int> A = {5, 2, 6, 7, 2, 1, 0, 3};
    cout<<"Array before sorting:::";
    printVector(A);
    selectionSort(A);
    cout<<"\nArray After sorting:::";
    printVector(A);
    return 0;
}
