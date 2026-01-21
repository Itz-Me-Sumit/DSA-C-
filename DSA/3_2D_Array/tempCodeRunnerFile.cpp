// Sum of diagonal Element


int DiagonalSum(int arr[][3] , int row , int col){

    int totalsum = 0;

    for(int i = 0 ; i<row ; i++){

        for(int j = i ; j=i; j++){

                totalsum += arr[i][j];

        }

    }
    return totalsum;

}


#include<iostream>
using namespace std;

int main(){

    int arr[3][3] = {14, 28, 5, 11, 30, 9, 21, 2, 17};

    int result = DiagonalSum(arr , 3 , 3) ;   

    cout<<"Diagonal Sum Is : "<<result;

    return 0;

}