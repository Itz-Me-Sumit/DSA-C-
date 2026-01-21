#include<iostream>
using namespace std;

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int *ptr1 = &arr[0];

    int *ptr2 = &arr[1];

    cout<<ptr1<<endl;

    cout<<arr<<endl; // it'll print first index of array as ptr1 is printing.

    cout<<ptr2<<endl;

    cout<<arr+1; // it'll print second index of array as ptr2 is printing.

}