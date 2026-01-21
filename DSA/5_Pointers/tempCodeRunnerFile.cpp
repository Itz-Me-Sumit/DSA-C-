

#include <iostream>
using namespace std;

int main(){

    int *ptr1 = new int;

    *ptr1 = 7;

    float *ptr2 = new float;
    
    *ptr2 = 3.55;

    int n;
    cout<<"Enter Array Size : ";
    cin>>n;

    int *ptr3 = new int [n];

    for(int i = 0 ; i < n ; i++){

        ptr3[i] = i + 1;

    }

    for(int i = 0 ; i < n ; i++){

        cout<<ptr3[i]<<" ";

    }


    delete ptr1;
    delete ptr2;
    delete [] ptr3;


}