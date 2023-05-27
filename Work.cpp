#include <iostream>
using namespace std;

void quicksort(int arr[],int start, int end){
    int i = start;
    int j = end;
    int pivot = arr[(i+j)/2];
    int temp;
    while(i<=j){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<=j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    if(j>start){
        quicksort(arr,start,j);
    }
    if(i<end){
        quicksort(arr,i,end);
    }
}

int main(){
    int arr[] = {1,87,23,7,4,65,6,45,78,3,9,111,-192};
    int size = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,size-1);
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}