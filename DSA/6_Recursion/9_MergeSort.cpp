#include <iostream>
#include <vector>
using namespace std;

void Merge( int a[] , int start , int end , int mid){

    vector<int> array (end-start + 1);

    int left = start , right = mid + 1 , index = 0 ;

    while( left <= mid && right <= end ){

        if(a[left] >= a[right]){

            array[index] = a[right];
            
            right++;
            index++;

        }

        else{

            array[index] = a[left];
            
            left++;
            index++;

        }

    }

    // if left element is still empty.

    while(left <= mid){

        array[index] = a[left];
        left++ , index++;

    }

    // if right element is still empty.

    while(right <= end){

        array[index] = a[right];
        right++ , index++;

    }

    index = 0 ;
    
    while(start <= end){

        a[start] = array[index];

        index++ , start++ ;

    }

}

void MergeSort( int a[] , int start , int end){

    if(start >= end){

        return;

    }

    int mid = start + (end - start)/2;

    MergeSort( a , start , mid );
    MergeSort( a , mid + 1 , end );
    Merge( a , start , end , mid);

}

int main(){

    int arr[10] = {8,4,9,23,4,6,9,2,10,5};

    MergeSort( arr , 0 , sizeof(arr)/sizeof(arr[0]) - 1 );

    for(int i = 0 ; i < 10 ; i++){

        cout<<arr[i]<<" ";

    }

}