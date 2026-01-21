#include <iostream>
using namespace std;


void func(int a[] , int n){

    for(int i = 0 ; i< n ; i++){

        cout<<a[i]<<" ";

    }


}

int main(){


    int arr[5] = { 1,2,3,4,5 };

    func(arr , 5);



}