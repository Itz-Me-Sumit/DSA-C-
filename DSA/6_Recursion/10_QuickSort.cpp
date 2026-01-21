#include <iostream>
using namespace std;

int partition( int a[] , int start , int end ){

    int pos = start ; 

    for(int i = start ; i <= end ; i++){

        if(a[i] <= a[end]){

            swap(a[i] , a[pos]);
            pos++;

        }

    }

    return pos - 1;

}

void QuickSort( int a[] , int start , int end){

    if(start >= end){

        return;

    }

    int pivot = partition( a , start , end);

    // Left Side.

    QuickSort(a , start , pivot - 1);
    QuickSort(a , pivot + 1 , end);

}


int main(){

    int arr[10] = { 4,9,5,8,1,0,4,2,7,4};

    QuickSort(arr , 0 , 9);

    for(int i = 0 ; i < 10 ; i++){

        cout<<arr[i]<<" "; 

    }

}