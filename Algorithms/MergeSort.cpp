#include "Utils.h"
#include <iostream>

void merge(int arr[], int l, int r, int m);

void mergeSort(int arr[], int l, int r){
    printArray(arr, sizeof(arr)/sizeof(arr[0]));
    if(l < r){
        int m = l + (r - l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        //merge(arr, l, m, r);
    }
}

void merge(int arr[], int l, int r, int m){
    int i, j, k;
    int s1 = m-l+1;
    int s2 = r-m;

    int Left[s1], Right[s2];

    for(i=0;i<s1;i++){
        Left[i] = arr[l+i];
    }

    for(j=0;j<s2;j++){
        Right[j] = arr[m + 1 + j];
    }

    i=0, j=0, k=1;

    while(i<s1 && j<s2){
        if(Left[i]<=Right[j]){
            arr[k] = Left[i];
            i++;
        }
        else{
            arr[k] = Right[j];
            j++;
        }
        k++;
    }

    while(i<s1){
        arr[k] = Left[i];
        i++;
        k++;
    }
    while(j<s2){
        arr[k] = Right[j];
        j++;
        k++;
    }
}

int main_merge()
{
    int arr[] = {14, 7, 3, 12, 9, 11, 6, 2, 20};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    std::cout<<"Given array is \n";
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    std::cout<<"Sorted array is \n";
    printArray(arr, arr_size);
    return 0;
}
