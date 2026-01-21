#include <iostream>
using namespace std;

int BinarySearch(int a[] , int start, int end , int search){

    if(end<start){

        return -1;

    }

    int mid = start + ( end - start )/2;

    if(a[mid] == search){

        return mid;

    }

    if(a[mid] > search){

        return BinarySearch(a , start , mid - 1 ,search );

    }

    else{

        return BinarySearch(a , mid + 1 , end , search);

    }

}

int main(){

    int arr[10] = {2,5,7,9,22,34,37,41,45,56};

    int srh;
    cout<<"Enter : ";
    cin>>srh;

    int index = BinarySearch(arr , 0 , sizeof(arr)/sizeof(arr[0]) - 1 , srh);

    if( index == -1){

        cout<<"Element "<<srh<<" Not Found";

    }

    else{

        cout<<"Index : "<<index <<endl<<"Element : "<<arr[index];

    }

}