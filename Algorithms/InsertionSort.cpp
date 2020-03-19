#include "Utils.h"
#include <iostream>

void insertionSort(int arr[], int size){
    std::cout<<"Sorting"<<"\n";
    int j, key;
    for(int i=1;i<size;i++){
        j = i-1;
        key = arr[i];
        while(j >= 0 && arr[j]>key){
            arr[j+1] = arr[j];
            std::cout<<"\nSorting after round "<<i<<" sub-round "<<j<<", ";
            j--;
            printArray(arr, size);
        }
        arr[j+1] = key;
        std::cout<<"\nSorting after round "<<i<<", ";
        printArray(arr, size);
    }
    std::cout<<"Sorted"<<"\n";
}

int main_insert(){

    int arr[6] = {25, 17, 31, 13, 2, 15};
    printArray(arr, 6);
    insertionSort(arr, 6);
    printArray(arr, 6);
    return 0;
}
