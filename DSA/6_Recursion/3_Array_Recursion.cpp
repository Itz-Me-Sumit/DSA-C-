// Print Element of Array.

#include <iostream>
using namespace std;

void print(int a[] , int n){

    if(n==0){

        return;
    }

    print(a , n-1);

    cout<<a[n-1]<<" ";

}

int main(){

    int arrsize = 10;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    print(arr , arrsize);

}


// Sum of all Element of Array.

#include <iostream>
using namespace std;

int sum(int a[] , int n){

    if(n == 0){

        return a[n];

    }

    return a[n] + sum(a , n-1);

}

int main(){

    int arr[5] = { 1 , 2 , 3 , 4 , 5};

    cout<<sum(arr , 4);

}


// Minimum element in Array

#include <iostream>
using namespace std;

int mini( int a[] , int n){

    if(n == 0){

        return a[n];

    }

    return min(a[n] , mini(a , n-1));

}

int main(){

    int arr[10] = { 2,5,102, 13,193,4,224,13,24,9};

    cout<<mini(arr,9);

}