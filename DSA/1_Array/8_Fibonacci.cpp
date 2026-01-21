#include <iostream>
using namespace std;


        // fibonacci series --> 0  1  1  2  3  5  8  13 21 34 55
        //            index --> 0  1  2  3  4  5  6  7  8  9  10

int main (){

    int n ;
    cout<<"Enter your index : ";
    cin>>n;

    int arr[1000];

    arr[0] = 0 ;
    arr[1] = 1;

    for(int i = 2 ; i <= n ; i++){

        arr[i] = arr[i-1] + arr[i-2];
        
    


    }
    cout<<arr[n];

}

