#include <iostream>
using namespace std;

bool find(int arr[] , int index , int  n , int target){

    if(target == 0){

        return true;

    }

    if(index == n || target < 0){

        return false;

    }

    return find(arr , index + 1 , n , target) || find(arr , index + 1 , n , target - arr[index]);

}


int main(){

    int arr[3] = {2,3,6};
    int target = 8;

    cout<<find(arr , 0 , 3 , target )<<" ";

}
