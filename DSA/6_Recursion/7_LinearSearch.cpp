#include <iostream>
using namespace std;

int LinearSearch(int a[], int index , int search){

    if(index < 0){

        return -1 ;

    }

    if(a[index] == search){

        return index;

    }    

    return LinearSearch(a , index - 1 , search);

}

int main(){

    int arr[10] = {9,5,4,2,6,1,0,12,42,22};

    int srh;
    cout<<"Enter : ";
    cin>>srh;

    if(LinearSearch(arr , sizeof(arr)/sizeof(arr[0]) , srh ) == -1){

        cout<<"Not Found.";

    }

    else{

        cout<<"Index : "<<LinearSearch(arr , sizeof(arr)/sizeof(arr[0]) , srh );

    }

}