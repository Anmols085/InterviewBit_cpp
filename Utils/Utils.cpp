#include "Utils.h"
#include <iostream>
#include <vector>

void printArray(int arr[], int size){

    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}

void printVector(std::vector<int> &A){

    for(int num : A) std::cout << num <<" ";
    std::cout<<"\n";
}
