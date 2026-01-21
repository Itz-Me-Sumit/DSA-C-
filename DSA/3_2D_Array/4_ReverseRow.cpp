#include <iostream>
using namespace std;

int main(){

    int arr[3][4] = {14, 28, 5, 11, 30, 9, 21, 2, 17, 24, 6, 19};

    int row = 3 , col = 4;

    for(int i = 0 ; i < row ; i++){
        
        for(int j = col-1 ; j>=0 ; j--){

            cout<<arr[i][j]<<"  ";

        }
        
        cout<<endl;

    }

}